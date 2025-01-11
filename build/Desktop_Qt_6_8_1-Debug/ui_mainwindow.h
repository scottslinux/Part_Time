/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCalendarWidget *calendarWidget;
    QLabel *title_label;
    QProgressBar *Regular_Bar;
    QProgressBar *Reduced_Bar;
    QLabel *label_regular;
    QLabel *label_reduced;
    QLabel *label_totalDays;
    QLabel *label_RegTimeDays;
    QLabel *label_ReducedTime;
    QLabel *TotalDAYS;
    QLineEdit *lineedit_reg;
    QLineEdit *lineEdit_Red;
    QPushButton *sched_reg_button;
    QPushButton *print_button;
    QPushButton *sched_red_button;
    QPushButton *erase_button;
    QPushButton *save_button;
    QProgressBar *Total_Bar;
    QLabel *label_totalbar;
    QTextEdit *ResultBox;
    QLabel *label;
    QLabel *indicatorLabel;
    QMenuBar *menubar;
    QMenu *menuPart_Time_Manager;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1031, 800);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(192, 191, 188, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(223, 223, 221, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(96, 96, 94, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(128, 127, 125, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 127));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(96, 96, 94, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        QBrush brush9(QColor(250, 248, 244, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(40, 110, 761, 481));
        QFont font;
        font.setBold(true);
        calendarWidget->setFont(font);
        title_label = new QLabel(centralwidget);
        title_label->setObjectName("title_label");
        title_label->setGeometry(QRect(-70, 20, 1031, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MathJax_Main")});
        font1.setPointSize(32);
        font1.setBold(true);
        font1.setItalic(false);
        title_label->setFont(font1);
        title_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Regular_Bar = new QProgressBar(centralwidget);
        Regular_Bar->setObjectName("Regular_Bar");
        Regular_Bar->setGeometry(QRect(850, 300, 161, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(28, 113, 216, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(102, 171, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(65, 142, 235, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(14, 57, 108, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(19, 75, 144, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush15(QColor(26, 95, 180, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush15);
        QBrush brush16(QColor(141, 184, 235, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush16);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush17(QColor(14, 57, 108, 127));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        QBrush brush18(QColor(59, 148, 255, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush18);
        Regular_Bar->setPalette(palette1);
        Regular_Bar->setValue(24);
        Reduced_Bar = new QProgressBar(centralwidget);
        Reduced_Bar->setObjectName("Reduced_Bar");
        Reduced_Bar->setGeometry(QRect(850, 400, 161, 51));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush19(QColor(46, 194, 126, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush19);
        QBrush brush20(QColor(96, 255, 182, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush20);
        QBrush brush21(QColor(71, 224, 154, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush21);
        QBrush brush22(QColor(23, 97, 63, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush22);
        QBrush brush23(QColor(31, 129, 84, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush23);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush19);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush24(QColor(150, 224, 190, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush24);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush20);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush21);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush22);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush23);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush24);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush21);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush23);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush25(QColor(23, 97, 63, 127));
        brush25.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush25);
#endif
        QBrush brush26(QColor(60, 252, 164, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush26);
        Reduced_Bar->setPalette(palette2);
        Reduced_Bar->setValue(24);
        label_regular = new QLabel(centralwidget);
        label_regular->setObjectName("label_regular");
        label_regular->setGeometry(QRect(850, 350, 161, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        label_regular->setFont(font2);
        label_reduced = new QLabel(centralwidget);
        label_reduced->setObjectName("label_reduced");
        label_reduced->setGeometry(QRect(850, 450, 161, 31));
        label_reduced->setFont(font2);
        label_reduced->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_totalDays = new QLabel(centralwidget);
        label_totalDays->setObjectName("label_totalDays");
        label_totalDays->setGeometry(QRect(40, 630, 141, 21));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_totalDays->setFont(font3);
        label_RegTimeDays = new QLabel(centralwidget);
        label_RegTimeDays->setObjectName("label_RegTimeDays");
        label_RegTimeDays->setGeometry(QRect(40, 660, 141, 21));
        label_RegTimeDays->setFont(font3);
        label_ReducedTime = new QLabel(centralwidget);
        label_ReducedTime->setObjectName("label_ReducedTime");
        label_ReducedTime->setGeometry(QRect(40, 690, 151, 21));
        label_ReducedTime->setFont(font3);
        TotalDAYS = new QLabel(centralwidget);
        TotalDAYS->setObjectName("TotalDAYS");
        TotalDAYS->setGeometry(QRect(190, 630, 71, 21));
        TotalDAYS->setFont(font3);
        TotalDAYS->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineedit_reg = new QLineEdit(centralwidget);
        lineedit_reg->setObjectName("lineedit_reg");
        lineedit_reg->setGeometry(QRect(200, 660, 41, 22));
        lineedit_reg->setFont(font3);
        lineEdit_Red = new QLineEdit(centralwidget);
        lineEdit_Red->setObjectName("lineEdit_Red");
        lineEdit_Red->setGeometry(QRect(200, 690, 41, 22));
        lineEdit_Red->setFont(font3);
        sched_reg_button = new QPushButton(centralwidget);
        sched_reg_button->setObjectName("sched_reg_button");
        sched_reg_button->setGeometry(QRect(280, 660, 137, 26));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        sched_reg_button->setPalette(palette3);
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(true);
        sched_reg_button->setFont(font4);
        print_button = new QPushButton(centralwidget);
        print_button->setObjectName("print_button");
        print_button->setGeometry(QRect(870, 530, 131, 71));
        print_button->setFont(font4);
        sched_red_button = new QPushButton(centralwidget);
        sched_red_button->setObjectName("sched_red_button");
        sched_red_button->setGeometry(QRect(450, 660, 142, 26));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush19);
        sched_red_button->setPalette(palette4);
        sched_red_button->setFont(font4);
        erase_button = new QPushButton(centralwidget);
        erase_button->setObjectName("erase_button");
        erase_button->setGeometry(QRect(630, 660, 91, 26));
        erase_button->setFont(font4);
        save_button = new QPushButton(centralwidget);
        save_button->setObjectName("save_button");
        save_button->setGeometry(QRect(870, 620, 131, 71));
        save_button->setFont(font4);
        Total_Bar = new QProgressBar(centralwidget);
        Total_Bar->setObjectName("Total_Bar");
        Total_Bar->setGeometry(QRect(850, 190, 161, 51));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush27(QColor(222, 221, 218, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush27);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush28(QColor(238, 238, 236, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush28);
        QBrush brush29(QColor(111, 110, 109, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush29);
        QBrush brush30(QColor(148, 147, 145, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush30);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush27);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush31(QColor(145, 65, 172, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush31);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush28);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush27);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush28);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush29);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush30);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush27);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush31);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush28);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush29);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush27);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush28);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush29);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush30);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush29);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush29);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush27);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush27);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush27);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush32(QColor(111, 110, 109, 127));
        brush32.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush32);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        Total_Bar->setPalette(palette5);
        Total_Bar->setValue(24);
        label_totalbar = new QLabel(centralwidget);
        label_totalbar->setObjectName("label_totalbar");
        label_totalbar->setGeometry(QRect(853, 240, 161, 31));
        label_totalbar->setFont(font2);
        label_totalbar->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ResultBox = new QTextEdit(centralwidget);
        ResultBox->setObjectName("ResultBox");
        ResultBox->setGeometry(QRect(850, 40, 161, 131));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 610, 141, 21));
        label->setFont(font);
        indicatorLabel = new QLabel(centralwidget);
        indicatorLabel->setObjectName("indicatorLabel");
        indicatorLabel->setGeometry(QRect(567, 604, 121, 31));
        QPalette palette6;
        QBrush brush33(QColor(15, 22, 167, 255));
        brush33.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush33);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush33);
        indicatorLabel->setPalette(palette6);
        indicatorLabel->setFont(font3);
        indicatorLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1031, 20));
        menuPart_Time_Manager = new QMenu(menubar);
        menuPart_Time_Manager->setObjectName("menuPart_Time_Manager");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPart_Time_Manager->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title_label->setText(QCoreApplication::translate("MainWindow", "Part Time Schedule Manager", nullptr));
        label_regular->setText(QCoreApplication::translate("MainWindow", "Regular Vacation Days", nullptr));
        label_reduced->setText(QCoreApplication::translate("MainWindow", "Reduced TIme Days", nullptr));
        label_totalDays->setText(QCoreApplication::translate("MainWindow", "Total Days (initial)", nullptr));
        label_RegTimeDays->setText(QCoreApplication::translate("MainWindow", "Regular Time Days", nullptr));
        label_ReducedTime->setText(QCoreApplication::translate("MainWindow", "Reduced Time Days", nullptr));
        TotalDAYS->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineedit_reg->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_Red->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        sched_reg_button->setText(QCoreApplication::translate("MainWindow", "Schedule Regular", nullptr));
        print_button->setText(QCoreApplication::translate("MainWindow", "Print Summary", nullptr));
        sched_red_button->setText(QCoreApplication::translate("MainWindow", "Schedule Reduced", nullptr));
        erase_button->setText(QCoreApplication::translate("MainWindow", "Erase Days", nullptr));
        save_button->setText(QCoreApplication::translate("MainWindow", "Save Changes", nullptr));
        label_totalbar->setText(QCoreApplication::translate("MainWindow", "Total Vacation Days", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Active Selection Mode", nullptr));
        indicatorLabel->setText(QString());
        menuPart_Time_Manager->setTitle(QCoreApplication::translate("MainWindow", "Part Time Manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
