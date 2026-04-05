/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *portName;
    QComboBox *baudRate;
    QLabel *label_2;
    QComboBox *dataBits;
    QLabel *label_3;
    QComboBox *parity;
    QLabel *label_4;
    QComboBox *stopBits;
    QLabel *label_5;
    QComboBox *flowControl;
    QLabel *label_6;
    QPlainTextEdit *recvTextEdit;
    QPlainTextEdit *sendTextEdit;
    QPushButton *openButton;
    QPushButton *sendButton;
    QCheckBox *checkBox;
    QLineEdit *timelineEdit;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1014, 788);
        MainWindow->setStyleSheet(QString::fromUtf8("/*\n"
"qss\347\276\216\345\214\226 - \351\273\204\345\274\272\350\200\201\345\270\210\n"
"*/\n"
"QWidget\n"
"{  \n"
"	font:  16pt \"Microsoft YaHei\";\n"
"     color:  #ffffff;\n"
"}\n"
"\n"
"QLabel {\n"
"	\n"
"}\n"
"\n"
"QGroupBox {\n"
"    border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;   \n"
"\n"
"}\n"
"\n"
"QGroupBox::title {\n"
" \n"
"    subcontrol-origin: margin;\n"
"    left:20px;\n"
"    padding: -10px 5px 0px 5px;\n"
"}\n"
"\n"
"QMainWindow {\n"
"	background-color:#151a1e;\n"
"}\n"
"QCalendar {\n"
"	background-color: #151a1e;\n"
"}\n"
"QTextEdit {\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	background-color: #222b2e;\n"
"	color: #d3dae3;\n"
"}\n"
"QPlainTextEdit {\n"
"    font:  10pt \"Microsoft YaHei\";\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	background-color: #222b2e;\n"
"	color: #d3dae3;\n"
"}\n"
"QToolButton {\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0."
                        "5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(217, 217, 217), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(217, 217, 217));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: rgb(255,255,255);\n"
"}\n"
"QToolButton:hover{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(195, 195, 195), stop:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(197, 197, 197), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop"
                        ":0 rgb(227, 227, 227), stop:1 rgb(197, 197, 197));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(195, 195, 195), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: rgb(0,0,0);\n"
"	padding: 2px;\n"
"	background-color: rgb(255,255,255);\n"
"}\n"
"QToolButton:pressed{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(217, 217, 217), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(217, 217, 217));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: rgb(0,0,0);\n"
"	padding: 2px;\n"
"	backgrou"
                        "nd-color: rgb(142,142,142);\n"
"}\n"
"QPushButton{\n"
"\n"
"    border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b; \n"
" \n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QPushButton::default{\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #FFFFFF;\n"
"	padding: 2px;\n"
"	background-color: #151a1e;;\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: solid;\n"
"	border-color: #050a0e;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: #1c1f1f;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: solid;\n"
"	border-color: #050a0e;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: #2c2f2f;\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), st"
                        "op:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(217, 217, 217), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(217, 217, 217));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #808086;\n"
"	padding: 2px;\n"
"	background-color: rgb(142,142,142);\n"
"}\n"
"QLineEdit {\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	background-color: #222b2e;\n"
"	color: #d3dae3;\n"
"}\n"
"\n"
"\n"
"\n"
"QLCDNumber {\n"
"	color: #4d9b87;\n"
"}\n"
"QProgressBar {\n"
"	text-align: center;\n"
"	color: #d3dae3;\n"
"	border-radius: 10px;\n"
"	border-color: transparent;\n"
"	border-style: solid;\n"
"	background-color: #52595d;\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-color: #214037"
                        "	;\n"
"	border-radius: 10px;\n"
"}\n"
"QMenuBar {\n"
"	background-color: #151a1e;\n"
"}\n"
"QMenuBar::item {\n"
"	color: #d3dae3;\n"
"  	spacing: 3px;\n"
"  	padding: 1px 4px;\n"
"	background-color: #151a1e;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"  	background-color: #252a2e;\n"
"	color: #FFFFFF;\n"
"}\n"
"QMenu {\n"
"	background-color: #151a1e;\n"
"}\n"
"QMenu::item:selected {\n"
"	background-color: #252a2e;\n"
"	color: #FFFFFF;\n"
"}\n"
"QMenu::item {\n"
"	color: #d3dae3;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabWidget {\n"
"	color:rgb(0,0,0);\n"
"	background-color:#000000;\n"
"}\n"
"QTabWidget::pane {\n"
"		border-color: #050a0e;\n"
"		background-color: #1e282c;\n"
"		border-style: solid;\n"
"		border-width: 1px;\n"
"    	border-bottom-left-radius: 4px;\n"
"		border-bottom-right-radius: 4px;\n"
"}\n"
"QTabBar::tab:first {\n"
"	border-style: solid;\n"
"	border-left-width:1px;\n"
"	border-right-width:0px;\n"
"	border-top-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-top-color: #050a0e;\n"
"	"
                        "border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	border-top-left-radius: 4px;\n"
"	color: #d3dae3;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabBar::tab:last {\n"
"	border-style: solid;\n"
"	border-top-width:1px;\n"
"	border-left-width:1px;\n"
"	border-right-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-color: #050a0e;\n"
"	border-top-right-radius: 4px;\n"
"	color: #d3dae3;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabBar::tab {\n"
"	border-style: solid;\n"
"	border-top-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-left-width:1px;\n"
"	border-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	color: #d3dae3;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"  	border-style: solid;\n"
"  	border-left-width:1px;\n"
"	border-bottom-width:0px;\n"
"	bo"
                        "rder-right-color: transparent;\n"
"	border-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	color: #FFFFFF;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #1e282c;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:first:selected, QTabBar::tab:hover {\n"
"  	border-style: solid;\n"
"  	border-left-width:1px;\n"
"  	border-bottom-width:0px;\n"
"  	border-top-width:1px;\n"
"	border-right-color: transparent;\n"
"	border-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	color: #FFFFFF;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #1e282c;\n"
"}\n"
"\n"
"QCheckBox { \n"
"	padding: 2px;\n"
"}\n"
"QCheckBox:disabled {\n"
"	color: #808086;\n"
"	padding: 2px;\n"
"}\n"
"\n"
"QCheckBox:hover {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	padding-left: 1px;\n"
"	padding-right: 1px;\n"
"	padding-bottom: 1px;\n"
"	padding-top: 1px;\n"
"	border-width:1px;\n"
"	border-color: transparent;\n"
"}\n"
""
                        "QCheckBox::indicator:checked {\n"
"\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b; \n"
"	background-color:  #4fa08b;\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b;\n"
"	background-color:  #FFFFFF;\n"
"}\n"
"QRadioButton {\n"
"	color: #d3dae3;\n"
"	padding: 1px;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b;\n"
"	color: #a9b7c6;\n"
"	background-color: qradialgradient(cx:0.5, cy:0.5, radius:0.4,fx:0.5, fy:0.5, stop:0 #4fa08b, stop:1 #1e282c);\n"
"}\n"
"QRadioButton::indicator:!checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b;\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QStatusBar {\n"
""
                        "	color:#027f7f;\n"
"}\n"
"QSpinBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QDoubleSpinBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QTimeEdit {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QDateTimeEdit {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QDateEdit {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QFontComboBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QComboBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
""
                        "	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px solid gray;   /* \351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206 */\n"
"    border: 1px solid  #4fa08b;   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\347\232\204\350\276\271\346\241\206 */ \n"
"    background-color: #222b2e; /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    selection-background-color: #4fa08b;   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\344\270\255\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"QComboBox:disabled\n"
"{ \n"
"background-color: gray; /* \346\225\264\344\270\252\344\270\213\346"
                        "\213\211\347\252\227\344\275\223\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QDial {\n"
"	background: #16a085;\n"
"}\n"
"\n"
"QToolBox {\n"
"	color: #a9b7c6;\n"
"	background-color: #222b2e;\n"
"}\n"
"QToolBox::tab {\n"
"	color: #a9b7c6;\n"
"	background-color:#222b2e;\n"
"}\n"
"QToolBox::tab:selected {\n"
"	color: #FFFFFF;\n"
"	background-color:#222b2e;\n"
"}\n"
"QScrollArea {\n"
"	color: #FFFFFF;\n"
"	background-color:#222b2e;\n"
"}\n"
"QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	background-color: #52595d;\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background-color: #52595d;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: #1a2224;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"	width: 12px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: #1a2224;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"	height: 12px;\n"
"	margin:"
                        " 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: #52595d;\n"
"}\n"
"QSlider::add-page:vertical {\n"
"    background: #52595d;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background-color: #15433a;\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"    background-color: #15433a;\n"
"}\n"
"QScrollBar:horizontal {\n"
"	max-height: 10px;\n"
"	border: 1px transparent grey;\n"
"	margin: 0px 20px 0px 20px;\n"
"	background: transparent;\n"
"}\n"
"QScrollBar:vertical {\n"
"	max-width: 10px;\n"
"	border: 1px transparent grey;\n"
"	margin: 20px 0px 20px 0px;\n"
"	background: transparent;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"	background: #52595d;\n"
"	border-style: transparent;\n"
"	border-radius: 4px;\n"
"	min-width: 25px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover {\n"
"	background: #58a492;\n"
"	border-style: transparent;\n"
"	border-radius: 4px;\n"
"	min-width: 25px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"	background: #52595d;\n"
"	border-style: transparent;\n"
""
                        "	border-radius: 4px;\n"
"	min-height: 25px;\n"
"}\n"
"QScrollBar::handle:vertical:hover {\n"
"	background: #58a492;\n"
"	border-style: transparent;\n"
"	border-radius: 4px;\n"
"	min-height: 25px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"   border: 2px transparent grey;\n"
"   border-top-right-radius: 4px;\n"
"   border-bottom-right-radius: 4px;\n"
"   background: #15433a;\n"
"   width: 20px;\n"
"   subcontrol-position: right;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:horizontal:pressed {\n"
"   border: 2px transparent grey;\n"
"   border-top-right-radius: 4px;\n"
"   border-bottom-right-radius: 4px;\n"
"   background: rgb(181,181,181);\n"
"   width: 20px;\n"
"   subcontrol-position: right;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"   border: 2px transparent grey;\n"
"   border-bottom-left-radius: 4px;\n"
"   border-bottom-right-radius: 4px;\n"
"   background: #15433a;\n"
"   height: 20px;\n"
"   subcontrol-position: bottom;\n"
"   subcontrol-o"
                        "rigin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:pressed {\n"
"   border: 2px transparent grey;\n"
"   border-bottom-left-radius: 4px;\n"
"   border-bottom-right-radius: 4px;\n"
"   background: rgb(181,181,181);\n"
"   height: 20px;\n"
"   subcontrol-position: bottom;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal {\n"
"   border: 2px transparent grey;\n"
"   border-top-left-radius: 4px;\n"
"   border-bottom-left-radius: 4px;\n"
"   background: #15433a;\n"
"   width: 20px;\n"
"   subcontrol-position: left;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal:pressed {\n"
"   border: 2px transparent grey;\n"
"   border-top-left-radius: 4px;\n"
"   border-bottom-left-radius: 4px;\n"
"   background: rgb(181,181,181);\n"
"   width: 20px;\n"
"   subcontrol-position: left;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"   border: 2px transparent grey;\n"
"   border-top-left-radius: 4px;\n"
"   border-top-right-radius: 4px;\n"
""
                        "   background: #15433a;\n"
"   height: 20px;\n"
"   subcontrol-position: top;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:pressed {\n"
"   border: 2px transparent grey;\n"
"   border-top-left-radius: 4px;\n"
"   border-top-right-radius: 4px;\n"
"   background: rgb(181,181,181);\n"
"   height: 20px;\n"
"   subcontrol-position: top;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"   background: none;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"   background: none;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 40, 411, 531));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 70, 111, 41));
        portName = new QComboBox(groupBox);
        portName->setObjectName("portName");
        portName->setGeometry(QRect(150, 70, 211, 41));
        baudRate = new QComboBox(groupBox);
        baudRate->setObjectName("baudRate");
        baudRate->setGeometry(QRect(150, 140, 211, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 140, 111, 41));
        dataBits = new QComboBox(groupBox);
        dataBits->setObjectName("dataBits");
        dataBits->setGeometry(QRect(150, 210, 211, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 210, 111, 41));
        parity = new QComboBox(groupBox);
        parity->setObjectName("parity");
        parity->setGeometry(QRect(150, 280, 211, 41));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 280, 111, 41));
        stopBits = new QComboBox(groupBox);
        stopBits->setObjectName("stopBits");
        stopBits->setGeometry(QRect(150, 360, 211, 41));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 360, 111, 41));
        flowControl = new QComboBox(groupBox);
        flowControl->setObjectName("flowControl");
        flowControl->setGeometry(QRect(150, 440, 211, 41));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 440, 111, 41));
        recvTextEdit = new QPlainTextEdit(centralwidget);
        recvTextEdit->setObjectName("recvTextEdit");
        recvTextEdit->setGeometry(QRect(460, 50, 481, 381));
        sendTextEdit = new QPlainTextEdit(centralwidget);
        sendTextEdit->setObjectName("sendTextEdit");
        sendTextEdit->setGeometry(QRect(460, 450, 481, 121));
        openButton = new QPushButton(centralwidget);
        openButton->setObjectName("openButton");
        openButton->setGeometry(QRect(130, 630, 141, 51));
        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(800, 630, 141, 51));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(330, 630, 181, 51));
        timelineEdit = new QLineEdit(centralwidget);
        timelineEdit->setObjectName("timelineEdit");
        timelineEdit->setGeometry(QRect(490, 640, 201, 41));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(700, 630, 91, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1014, 38));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\351\273\204\345\274\272\350\200\201\345\270\210\347\232\204\344\270\262\345\217\243\345\267\245\345\205\267(\345\244\232\347\272\277\347\250\213)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\265\201\346\216\247\345\210\266", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        sendButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ms/\346\254\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
