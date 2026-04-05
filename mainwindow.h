#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QDateTime>
#include <QTimer>
#include <QDebug>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // 初始化界面控件
    void InitUI();

private slots:
    // 打开串口按钮点击
    void on_openButton_clicked();
    // 发送数据按钮点击
    void on_sendButton_clicked();
    // 复选框状态改变
    void on_checkBox_stateChanged(int arg1);

    // 串口数据读取
    void serialReadData();
    // 串口发送字节数反馈
    void bytesWriteData(qint64 bytes);
    // 定时器超时
    void timeUp();

private:
    Ui::MainWindow *ui;

    // 串口对象
    QSerialPort m_serial;
    // 定时器对象
    QTimer m_timer;
};

#endif // MAINWINDOW_H
