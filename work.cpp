#include "work.h"
#include <QThread>
#include <QDebug>

MySerialPort::MySerialPort(QObject *parent) : QSerialPort(parent)
{
    // 连接串口接收信号
    connect(this, &QSerialPort::readyRead, this, [this]() {
        // 输出线程ID
        qDebug() << "recv:   " << QThread::currentThreadId();

        // 读取所有数据
        QByteArray arr = readAll();
        emit sigReceived(arr);

        /*
        // 耗时工作（子线程运行，不卡界面）
        int sum = 0;
        for (int i = 0; i < 10000000; ++i) {
            sum += i;
        }
        qDebug() << sum;
        */
    });
}

// 开启串口
void MySerialPort::Start(Settings sets)
{
    // 设置串口参数
    setPortName(sets.name);
    setParity(sets.parity);
    setBaudRate(sets.baudRate);
    setDataBits(sets.dataBits);
    setStopBits(sets.stopBits);
    setFlowControl(sets.flowControl);

    // 输出线程ID
    qDebug() << "start:   " << QThread::currentThreadId();

    // 打开串口
    if (open(QIODevice::ReadWrite)) {
        emit sigStarted();
    } else {
        emit sigStoped(1);
    }
}

// 关闭串口
void MySerialPort::Stop()
{
    if (isOpen()) {
        close();
    }

    qDebug() << "Stop:   " << QThread::currentThreadId();

    emit sigStoped(0);
}

// 发送数据
void MySerialPort::Send(QByteArray data)
{
    qDebug() << "Send:   " << QThread::currentThreadId();

    if (isOpen()) {
        write(data);
    }
}
