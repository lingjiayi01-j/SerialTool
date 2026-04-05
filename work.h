#ifndef MYSERIALPORT_H
#define MYSERIALPORT_H

#include <QSerialPort>
#include <QDebug>
#include <QThread>

// 这个类的对象会移动到子线程中运行
class MySerialPort : public QSerialPort
{
    Q_OBJECT

public:
    explicit MySerialPort(QObject *parent = nullptr);

    // 串口参数结构体
    struct Settings {
        QString name;             // 端口名称 COM1、COM2
        QSerialPort::BaudRate baudRate;        // 波特率
        QSerialPort::DataBits dataBits;        // 数据位
        QSerialPort::Parity parity;            // 奇偶校验
        QSerialPort::StopBits stopBits;        // 停止位
        QSerialPort::FlowControl flowControl;  // 流控制
    };

public slots:
    // 在线程中执行的槽函数
    void Start(Settings sets);   // 打开串口
    void Stop();                 // 关闭串口
    void Send(QByteArray data);  // 发送数据

signals:
    void sigStarted();          // 串口已打开
    void sigStoped(int status); // 串口已关闭
    void sigReceived(QByteArray data); // 收到数据
};

#endif // MYSERIALPORT_H
