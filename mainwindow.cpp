#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCloseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 注册自定义类型，用于信号槽传参
    qRegisterMetaType<MySerialPort::Settings>("MySerialPort::Settings");

    InitUI();
    InitCOM();
}

void MainWindow::InitUI()
{
    // 初始化端口列表 COM1~COM10
    for (int i = 1; i <= 10; ++i) {
        ui->portName->addItem(QString("COM%1").arg(i));
    }

    // 波特率
    ui->baudRate->addItem("1200", QSerialPort::Baud1200);
    ui->baudRate->addItem("2400", QSerialPort::Baud2400);
    ui->baudRate->addItem("4800", QSerialPort::Baud4800);
    ui->baudRate->addItem("9600", QSerialPort::Baud9600);
    ui->baudRate->addItem("19200", QSerialPort::Baud19200);

    // 数据位
    ui->dataBits->addItem("8", QSerialPort::Data8);
    ui->dataBits->addItem("7", QSerialPort::Data7);
    ui->dataBits->addItem("6", QSerialPort::Data6);
    ui->dataBits->addItem("5", QSerialPort::Data5);

    // 奇偶校验
    ui->parity->addItem("None", QSerialPort::NoParity);
    ui->parity->addItem("Even", QSerialPort::EvenParity);
    ui->parity->addItem("Odd", QSerialPort::OddParity);

    // 停止位
    ui->stopBits->addItem("1", QSerialPort::OneStop);
    ui->stopBits->addItem("1.5", QSerialPort::OneAndHalfStop);
    ui->stopBits->addItem("2", QSerialPort::TwoStop);

    // 流控制
    ui->flowControl->addItem("None", QSerialPort::NoFlowControl);
    ui->flowControl->addItem("RTS/CTS", QSerialPort::HardwareControl);
    ui->flowControl->addItem("XON/XOFF", QSerialPort::SoftwareControl);

    // 定时器默认间隔
    ui->timelineEdit->setText("1000");

    // 定时器信号槽连接
    connect(&m_timer, &QTimer::timeout, this, &MainWindow::timeUp);
}

void MainWindow::InitCOM()
{
    // 将串口对象移动到子线程
    m_serial.moveToThread(&m_thread);
    m_thread.start();

    // 主线程 -> 子线程（控制指令）
    connect(this, &MainWindow::sigStart, &m_serial, &MySerialPort::Start);
    connect(this, &MainWindow::sigStop, &m_serial, &MySerialPort::Stop);
    connect(this, &MainWindow::sigSend, &m_serial, &MySerialPort::Send);

    // 子线程 -> 主线程（状态通知）
    connect(&m_serial, &MySerialPort::sigStarted, this, &MainWindow::started);
    connect(&m_serial, &MySerialPort::sigStoped, this, &MainWindow::stoped);
    connect(&m_serial, &MySerialPort::sigReceived, this, &MainWindow::recieved);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openButton_clicked()
{
    QString text = ui->openButton->text();

    if (text == QStringLiteral("打开串口")) {
        MySerialPort::Settings s;
        s.name = ui->portName->currentText();
        s.baudRate = static_cast<QSerialPort::BaudRate>(ui->baudRate->currentData().toInt());
        s.dataBits = static_cast<QSerialPort::DataBits>(ui->dataBits->currentData().toInt());
        s.stopBits = static_cast<QSerialPort::StopBits>(ui->stopBits->currentData().toInt());
        s.parity = static_cast<QSerialPort::Parity>(ui->parity->currentData().toInt());
        s.flowControl = static_cast<QSerialPort::FlowControl>(ui->flowControl->currentData().toInt());

        emit sigStart(s);
    } else {
        emit sigStop();
    }
}

void MainWindow::on_sendButton_clicked()
{
    QString strSend = ui->sendTextEdit->toPlainText();
    QByteArray arr = strSend.toUtf8();

    emit sigSend(arr);
}

void MainWindow::started()
{
    ui->openButton->setText(QStringLiteral("关闭串口"));
    ui->groupBox->setEnabled(false);
}

void MainWindow::stoped(int status)
{
    ui->openButton->setText(QStringLiteral("打开串口"));
    ui->groupBox->setEnabled(true);
}

void MainWindow::recieved(QByteArray arr)
{
    QString strText = QString(arr);
    QString currentTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz : ");

    ui->recvTextEdit->appendPlainText(currentTime + strText + "\n");
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    emit sigStop();
    m_thread.quit();
    m_thread.wait();

    event->accept();
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (arg1) {
        m_timer.start(ui->timelineEdit->text().toUInt());
    } else {
        m_timer.stop();
    }
}

void MainWindow::timeUp()
{
    on_sendButton_clicked();
}
