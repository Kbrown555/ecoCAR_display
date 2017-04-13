/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QProgressBar *current_regen;
    QLabel *label_2;
    QProgressBar *SOC_prog;
    QProgressBar *temp_prog;
    QProgressBar *current_discharge;
    QLabel *label;
    QLabel *bat_out;
    QLabel *label_3;
    QFrame *line;
    QLCDNumber *regen_num;
    QLCDNumber *dischargenum;
    QWidget *tab_2;
    QDial *eng_dial;
    QDial *mot_dial;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *tab_3;
    QLabel *label_4;
    QLabel *fatboy;
    QLabel *label_6;
    QLabel *skinnyboy;
    QLabel *dischargearrow;
    QLabel *chargarrow;
    QProgressBar *progressBar;
    QProgressBar *orb1;
    QProgressBar *orb1_2;
    QProgressBar *orb1_3;
    QProgressBar *orb1_4;
    QProgressBar *orb1_5;
    QProgressBar *orb1_6;
    QProgressBar *orb1_7;
    QProgressBar *orb1_8;
    QProgressBar *orb1_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 320);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:black;\n"
"}\n"
"QWidget{\n"
"background-color:black;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 480, 320));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
"background-color:black;\n"
"}\n"
"QTabBar::tab{\n"
"color:white;\n"
"background-color:black;\n"
"width:50px;\n"
"height:105px;\n"
"}\n"
"QTabBar{\n"
"color:black;\n"
"background-color:black;\n"
"}\n"
"QWidget{\n"
"background-color:black;\n"
"border-color:black;\n"
"}\n"
""));
        tabWidget->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        current_regen = new QProgressBar(tab);
        current_regen->setObjectName(QString::fromUtf8("current_regen"));
        current_regen->setGeometry(QRect(10, 180, 141, 81));
        current_regen->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(45, 137, 25);\n"
"border-radius:0px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid grey;\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        current_regen->setValue(24);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 150, 51, 21));
        SOC_prog = new QProgressBar(tab);
        SOC_prog->setObjectName(QString::fromUtf8("SOC_prog"));
        SOC_prog->setGeometry(QRect(20, 31, 281, 91));
        SOC_prog->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"border: 2px solid black;\n"
"border-radius: 5px;\n"
"text-align: center;\n"
"background:white;\n"
"}\n"
"QProgressBar::chunk{\n"
"border-radius: 5px;\n"
"}\n"
"\n"
""));
        SOC_prog->setValue(24);
        temp_prog = new QProgressBar(tab);
        temp_prog->setObjectName(QString::fromUtf8("temp_prog"));
        temp_prog->setGeometry(QRect(345, 20, 51, 191));
        temp_prog->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color: rgb(188, 5, 5);\n"
"border-radius: 3px;\n"
"}\n"
"QProgressBar{\n"
"border: none;\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;}"));
        temp_prog->setValue(24);
        current_discharge = new QProgressBar(tab);
        current_discharge->setObjectName(QString::fromUtf8("current_discharge"));
        current_discharge->setGeometry(QRect(150, 180, 141, 81));
        current_discharge->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(251, 90, 11);\n"
"border-radius:0px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid grey;\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        current_discharge->setValue(24);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 150, 81, 21));
        bat_out = new QLabel(tab);
        bat_out->setObjectName(QString::fromUtf8("bat_out"));
        bat_out->setGeometry(QRect(17, 28, 299, 97));
        bat_out->setFrameShape(QFrame::NoFrame);
        bat_out->setTextFormat(Qt::PlainText);
        bat_out->setPixmap(QPixmap(QString::fromUtf8("../build-first_GUI-Desktop-Debug/bo.jpg")));
        bat_out->setScaledContents(true);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 10, 101, 295));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../build-first_GUI-Desktop-Debug/thermooutline.jpg")));
        label_3->setScaledContents(true);
        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(144, 180, 13, 81));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        regen_num = new QLCDNumber(tab);
        regen_num->setObjectName(QString::fromUtf8("regen_num"));
        regen_num->setGeometry(QRect(50, 270, 64, 21));
        regen_num->setStyleSheet(QString::fromUtf8("QLCDNumber{\n"
"text-align:center;\n"
"}"));
        dischargenum = new QLCDNumber(tab);
        dischargenum->setObjectName(QString::fromUtf8("dischargenum"));
        dischargenum->setGeometry(QRect(180, 270, 64, 23));
        dischargenum->setStyleSheet(QString::fromUtf8(""));
        tabWidget->addTab(tab, QString());
        label_3->raise();
        bat_out->raise();
        SOC_prog->raise();
        current_regen->raise();
        label_2->raise();
        temp_prog->raise();
        current_discharge->raise();
        label->raise();
        line->raise();
        regen_num->raise();
        dischargenum->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setStyleSheet(QString::fromUtf8(""));
        eng_dial = new QDial(tab_2);
        eng_dial->setObjectName(QString::fromUtf8("eng_dial"));
        eng_dial->setGeometry(QRect(30, 90, 161, 141));
        eng_dial->setMaximum(210);
        eng_dial->setSingleStep(10);
        eng_dial->setNotchesVisible(true);
        mot_dial = new QDial(tab_2);
        mot_dial->setObjectName(QString::fromUtf8("mot_dial"));
        mot_dial->setGeometry(QRect(240, 90, 161, 141));
        mot_dial->setMinimum(-35);
        mot_dial->setMaximum(75);
        mot_dial->setSingleStep(10);
        mot_dial->setNotchesVisible(true);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 250, 91, 51));
        label_5->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        label_5->setFrameShadow(QFrame::Sunken);
        label_5->setTextFormat(Qt::RichText);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 250, 91, 51));
        label_7->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        label_7->setFrameShadow(QFrame::Sunken);
        label_7->setTextFormat(Qt::RichText);
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(88, 65, 41, 21));
        label_8->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(178, 112, 41, 21));
        label_9->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(165, 201, 41, 21));
        label_10->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(15, 134, 41, 21));
        label_11->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;"));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(230, 190, 41, 21));
        label_12->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(225, 120, 41, 21));
        label_13->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        label_13->setWordWrap(false);
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(330, 70, 41, 21));
        label_14->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(398, 155, 41, 21));
        label_15->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        tabWidget->addTab(tab_2, QString());
        label_5->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        eng_dial->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        mot_dial->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 50, 421, 201));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../build-first_GUI-Desktop-Debug/camaro.bmp")));
        label_4->setScaledContents(true);
        fatboy = new QLabel(tab_3);
        fatboy->setObjectName(QString::fromUtf8("fatboy"));
        fatboy->setGeometry(QRect(110, 126, 151, 50));
        fatboy->setPixmap(QPixmap(QString::fromUtf8("../build-first_GUI-Desktop-Debug/arrowleft.bmp")));
        fatboy->setScaledContents(true);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 140, 31, 21));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../build-first_GUI-Desktop-Debug/chub.bmp")));
        label_6->setScaledContents(true);
        skinnyboy = new QLabel(tab_3);
        skinnyboy->setObjectName(QString::fromUtf8("skinnyboy"));
        skinnyboy->setGeometry(QRect(110, 140, 151, 21));
        skinnyboy->setPixmap(QPixmap(QString::fromUtf8("../build-first_GUI-Desktop-Debug/arrowleft.bmp")));
        skinnyboy->setScaledContents(true);
        dischargearrow = new QLabel(tab_3);
        dischargearrow->setObjectName(QString::fromUtf8("dischargearrow"));
        dischargearrow->setGeometry(QRect(70, 90, 201, 31));
        dischargearrow->setPixmap(QPixmap(QString::fromUtf8("../build-first_GUI-Desktop-Debug/unchrg.bmp")));
        dischargearrow->setScaledContents(true);
        chargarrow = new QLabel(tab_3);
        chargarrow->setObjectName(QString::fromUtf8("chargarrow"));
        chargarrow->setGeometry(QRect(80, 90, 191, 31));
        chargarrow->setPixmap(QPixmap(QString::fromUtf8("../build-first_GUI-Desktop-Debug/chrg.bmp")));
        chargarrow->setScaledContents(true);
        progressBar = new QProgressBar(tab_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(88, 82, 5, 135));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(234, 170, 12);\n"
"}"));
        progressBar->setValue(24);
        orb1 = new QProgressBar(tab_3);
        orb1->setObjectName(QString::fromUtf8("orb1"));
        orb1->setGeometry(QRect(110, 100, 20, 20));
        orb1->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(252, 149, 0);\n"
"border-radius:5px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid rgb(252, 149, 0);\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        orb1->setValue(24);
        orb1_2 = new QProgressBar(tab_3);
        orb1_2->setObjectName(QString::fromUtf8("orb1_2"));
        orb1_2->setGeometry(QRect(150, 90, 20, 20));
        orb1_2->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(252, 149, 0);\n"
"border-radius:5px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid rgb(252, 149, 0);\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        orb1_2->setValue(24);
        orb1_3 = new QProgressBar(tab_3);
        orb1_3->setObjectName(QString::fromUtf8("orb1_3"));
        orb1_3->setGeometry(QRect(190, 90, 20, 20));
        orb1_3->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(252, 149, 0);\n"
"border-radius:5px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid rgb(252, 149, 0);\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        orb1_3->setValue(24);
        orb1_4 = new QProgressBar(tab_3);
        orb1_4->setObjectName(QString::fromUtf8("orb1_4"));
        orb1_4->setGeometry(QRect(230, 100, 20, 20));
        orb1_4->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(252, 149, 0);\n"
"border-radius:5px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid rgb(252, 149, 0);\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        orb1_4->setValue(24);
        orb1_5 = new QProgressBar(tab_3);
        orb1_5->setObjectName(QString::fromUtf8("orb1_5"));
        orb1_5->setGeometry(QRect(240, 140, 20, 20));
        orb1_5->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(252, 149, 0);\n"
"border-radius:5px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid rgb(252, 149, 0);\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        orb1_5->setValue(24);
        orb1_6 = new QProgressBar(tab_3);
        orb1_6->setObjectName(QString::fromUtf8("orb1_6"));
        orb1_6->setGeometry(QRect(210, 140, 20, 20));
        orb1_6->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(252, 149, 0);\n"
"border-radius:5px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid rgb(252, 149, 0);\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        orb1_6->setValue(24);
        orb1_7 = new QProgressBar(tab_3);
        orb1_7->setObjectName(QString::fromUtf8("orb1_7"));
        orb1_7->setGeometry(QRect(180, 140, 20, 20));
        orb1_7->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(252, 149, 0);\n"
"border-radius:5px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid rgb(252, 149, 0);\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        orb1_7->setValue(24);
        orb1_8 = new QProgressBar(tab_3);
        orb1_8->setObjectName(QString::fromUtf8("orb1_8"));
        orb1_8->setGeometry(QRect(150, 140, 20, 20));
        orb1_8->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(252, 149, 0);\n"
"border-radius:5px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid rgb(252, 149, 0);\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        orb1_8->setValue(24);
        orb1_9 = new QProgressBar(tab_3);
        orb1_9->setObjectName(QString::fromUtf8("orb1_9"));
        orb1_9->setGeometry(QRect(120, 140, 20, 20));
        orb1_9->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"background-color:rgb(252, 149, 0);\n"
"border-radius:5px;\n"
"}\n"
"QProgressBar{\n"
"border: 2px solid rgb(252, 149, 0);\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"background:black;\n"
"color:white;\n"
"}"));
        orb1_9->setValue(24);
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Regen</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Discharge</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        bat_out->setText(QString());
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Battery", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Engine </span></p><p align=\"center\"><span style=\" color:#ffffff;\">Power [HP]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#f5eded;\">Motor </span></p><p align=\"center\"><span style=\" color:#f5eded;\">Power [kW]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "100", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "150", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "200", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "50", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "-25", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "-05", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "25", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "55", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Car Info", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        fatboy->setText(QString());
        label_6->setText(QString());
        skinnyboy->setText(QString());
        dischargearrow->setText(QString());
        chargarrow->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Flow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
