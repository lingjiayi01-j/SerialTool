#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QDateTime>
#include <QTimer>
#include <QDebug>
#include <QThread>
#include <QCloseEvent>
#include "work.h"

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

    // 初始化串口线程
    void InitCOM();

protected:
    // 窗口关闭事件
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_openButton_clicked();
    void on_sendButton_clicked();
    void timeUp();
    void on_checkBox_stateChanged(int arg1);

signals:
    // 调用子线程槽函数的信号
    void sigStart(MySerialPort::Settings s);
    void sigStop();
    void sigSend(QByteArray data);

public slots:
    // 接收子线程通知的槽函数
    void started();
    void stoped(int status);
    void recieved(QByteArray data);

private:
    Ui::MainWindow *ui;

    // 串口工作对象（子线程运行）
    MySerialPort m_serial;

    // 子线程
    QThread m_thread;

    // 定时器
    QTimer m_timer;
};

#endif // MAINWINDOW_H
