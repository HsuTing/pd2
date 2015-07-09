/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <newgame.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *score_bg;
    QLabel *status_bg;
    QLabel *title;
    newgame *NewGame;
    QLabel *body;
    QLabel *cell_1;
    QLabel *cell_2;
    QLabel *cell_3;
    QLabel *cell_4;
    QLabel *cell_5;
    QLabel *cell_6;
    QLabel *cell_7;
    QLabel *cell_8;
    QLabel *cell_9;
    QLabel *cell_10;
    QLabel *cell_11;
    QLabel *cell_12;
    QLabel *cell_13;
    QLabel *cell_14;
    QLabel *cell_15;
    QLabel *cell_16;
    QLabel *status;
    QLabel *score;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setBaseSize(QSize(800, 600));
        QFont font;
        font.setFamily(QStringLiteral("LiHei Pro"));
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(250, 248, 239);"));
        MainWindow->setAnimated(true);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        score_bg = new QLabel(centralWidget);
        score_bg->setObjectName(QStringLiteral("score_bg"));
        score_bg->setEnabled(true);
        score_bg->setGeometry(QRect(390, 20, 91, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(score_bg->sizePolicy().hasHeightForWidth());
        score_bg->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("LiHei Pro"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        score_bg->setFont(font1);
        score_bg->setMouseTracking(false);
        score_bg->setAcceptDrops(false);
        score_bg->setLayoutDirection(Qt::LeftToRight);
        score_bg->setAutoFillBackground(false);
        score_bg->setStyleSheet(QLatin1String("background-color: rgb(187, 173, 160);\n"
"color: rgb(238, 228, 218);"));
        score_bg->setFrameShape(QFrame::Panel);
        score_bg->setFrameShadow(QFrame::Plain);
        score_bg->setScaledContents(false);
        score_bg->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        score_bg->setMargin(10);
        score_bg->setOpenExternalLinks(false);
        status_bg = new QLabel(centralWidget);
        status_bg->setObjectName(QStringLiteral("status_bg"));
        status_bg->setEnabled(true);
        status_bg->setGeometry(QRect(490, 20, 131, 51));
        sizePolicy1.setHeightForWidth(status_bg->sizePolicy().hasHeightForWidth());
        status_bg->setSizePolicy(sizePolicy1);
        status_bg->setFont(font1);
        status_bg->setMouseTracking(false);
        status_bg->setAcceptDrops(false);
        status_bg->setLayoutDirection(Qt::LeftToRight);
        status_bg->setAutoFillBackground(false);
        status_bg->setStyleSheet(QLatin1String("background-color: rgb(187, 173, 160);\n"
"color: rgb(238, 228, 218);"));
        status_bg->setFrameShape(QFrame::Panel);
        status_bg->setFrameShadow(QFrame::Plain);
        status_bg->setScaledContents(false);
        status_bg->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        status_bg->setMargin(10);
        status_bg->setOpenExternalLinks(false);
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setEnabled(true);
        title->setGeometry(QRect(170, 20, 181, 101));
        QFont font2;
        font2.setFamily(QStringLiteral("LiHei Pro"));
        font2.setPointSize(46);
        font2.setBold(true);
        font2.setWeight(75);
        title->setFont(font2);
        title->setStyleSheet(QStringLiteral("color: rgb(119, 110, 101);"));
        title->setAlignment(Qt::AlignCenter);
        NewGame = new newgame(centralWidget);
        NewGame->setObjectName(QStringLiteral("NewGame"));
        NewGame->setEnabled(true);
        NewGame->setGeometry(QRect(490, 80, 131, 41));
        sizePolicy1.setHeightForWidth(NewGame->sizePolicy().hasHeightForWidth());
        NewGame->setSizePolicy(sizePolicy1);
        NewGame->setFont(font1);
        NewGame->setMouseTracking(false);
        NewGame->setAcceptDrops(false);
        NewGame->setLayoutDirection(Qt::LeftToRight);
        NewGame->setAutoFillBackground(false);
        NewGame->setStyleSheet(QLatin1String("background-color: rgb(143, 122, 102);\n"
"color: rgb(249, 246, 242);"));
        NewGame->setFrameShape(QFrame::Panel);
        NewGame->setFrameShadow(QFrame::Plain);
        NewGame->setScaledContents(false);
        NewGame->setAlignment(Qt::AlignCenter);
        NewGame->setMargin(0);
        NewGame->setOpenExternalLinks(false);
        body = new QLabel(centralWidget);
        body->setObjectName(QStringLiteral("body"));
        body->setGeometry(QRect(160, 130, 451, 451));
        body->setStyleSheet(QStringLiteral("background-color: rgb(119, 110, 101);"));
        body->setFrameShape(QFrame::NoFrame);
        cell_1 = new QLabel(centralWidget);
        cell_1->setObjectName(QStringLiteral("cell_1"));
        cell_1->setGeometry(QRect(190, 160, 90, 90));
        QFont font3;
        font3.setFamily(QStringLiteral("LiHei Pro"));
        font3.setPointSize(34);
        font3.setBold(true);
        font3.setWeight(75);
        cell_1->setFont(font3);
        cell_1->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_1->setAlignment(Qt::AlignCenter);
        cell_2 = new QLabel(centralWidget);
        cell_2->setObjectName(QStringLiteral("cell_2"));
        cell_2->setGeometry(QRect(290, 160, 90, 90));
        cell_2->setFont(font3);
        cell_2->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_2->setAlignment(Qt::AlignCenter);
        cell_3 = new QLabel(centralWidget);
        cell_3->setObjectName(QStringLiteral("cell_3"));
        cell_3->setGeometry(QRect(390, 160, 90, 90));
        cell_3->setFont(font3);
        cell_3->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_3->setAlignment(Qt::AlignCenter);
        cell_4 = new QLabel(centralWidget);
        cell_4->setObjectName(QStringLiteral("cell_4"));
        cell_4->setGeometry(QRect(490, 160, 90, 90));
        cell_4->setFont(font3);
        cell_4->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_4->setAlignment(Qt::AlignCenter);
        cell_5 = new QLabel(centralWidget);
        cell_5->setObjectName(QStringLiteral("cell_5"));
        cell_5->setGeometry(QRect(190, 260, 90, 90));
        cell_5->setFont(font3);
        cell_5->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_5->setAlignment(Qt::AlignCenter);
        cell_6 = new QLabel(centralWidget);
        cell_6->setObjectName(QStringLiteral("cell_6"));
        cell_6->setGeometry(QRect(290, 260, 90, 90));
        cell_6->setFont(font3);
        cell_6->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_6->setAlignment(Qt::AlignCenter);
        cell_7 = new QLabel(centralWidget);
        cell_7->setObjectName(QStringLiteral("cell_7"));
        cell_7->setGeometry(QRect(390, 260, 90, 90));
        cell_7->setFont(font3);
        cell_7->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_7->setAlignment(Qt::AlignCenter);
        cell_8 = new QLabel(centralWidget);
        cell_8->setObjectName(QStringLiteral("cell_8"));
        cell_8->setGeometry(QRect(490, 260, 90, 90));
        cell_8->setFont(font3);
        cell_8->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_8->setAlignment(Qt::AlignCenter);
        cell_9 = new QLabel(centralWidget);
        cell_9->setObjectName(QStringLiteral("cell_9"));
        cell_9->setGeometry(QRect(190, 360, 90, 90));
        cell_9->setFont(font3);
        cell_9->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_9->setAlignment(Qt::AlignCenter);
        cell_10 = new QLabel(centralWidget);
        cell_10->setObjectName(QStringLiteral("cell_10"));
        cell_10->setGeometry(QRect(290, 360, 90, 90));
        cell_10->setFont(font3);
        cell_10->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_10->setAlignment(Qt::AlignCenter);
        cell_11 = new QLabel(centralWidget);
        cell_11->setObjectName(QStringLiteral("cell_11"));
        cell_11->setGeometry(QRect(390, 360, 90, 90));
        cell_11->setFont(font3);
        cell_11->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_11->setAlignment(Qt::AlignCenter);
        cell_12 = new QLabel(centralWidget);
        cell_12->setObjectName(QStringLiteral("cell_12"));
        cell_12->setGeometry(QRect(490, 360, 90, 90));
        cell_12->setFont(font3);
        cell_12->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_12->setAlignment(Qt::AlignCenter);
        cell_13 = new QLabel(centralWidget);
        cell_13->setObjectName(QStringLiteral("cell_13"));
        cell_13->setGeometry(QRect(190, 460, 90, 90));
        cell_13->setFont(font3);
        cell_13->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_13->setAlignment(Qt::AlignCenter);
        cell_14 = new QLabel(centralWidget);
        cell_14->setObjectName(QStringLiteral("cell_14"));
        cell_14->setGeometry(QRect(290, 460, 90, 90));
        cell_14->setFont(font3);
        cell_14->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_14->setAlignment(Qt::AlignCenter);
        cell_15 = new QLabel(centralWidget);
        cell_15->setObjectName(QStringLiteral("cell_15"));
        cell_15->setGeometry(QRect(390, 460, 90, 90));
        cell_15->setFont(font3);
        cell_15->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_15->setAlignment(Qt::AlignCenter);
        cell_16 = new QLabel(centralWidget);
        cell_16->setObjectName(QStringLiteral("cell_16"));
        cell_16->setGeometry(QRect(490, 460, 90, 90));
        cell_16->setFont(font3);
        cell_16->setStyleSheet(QLatin1String("background-color: rgba(238, 228, 218, 0.35);\n"
"color: rgb(255, 255, 255);"));
        cell_16->setAlignment(Qt::AlignCenter);
        status = new QLabel(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(530, 50, 47, 12));
        status->setFont(font);
        status->setStyleSheet(QLatin1String("background-color: rgb(187, 173, 160);\n"
"color: rgb(255, 255, 127);"));
        status->setAlignment(Qt::AlignCenter);
        score = new QLabel(centralWidget);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(410, 50, 47, 12));
        score->setFont(font);
        score->setStyleSheet(QLatin1String("background-color: rgb(187, 173, 160);\n"
"color: rgb(255, 255, 127);"));
        score->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "2048", 0));
        score_bg->setText(QApplication::translate("MainWindow", "SCORE", 0));
        status_bg->setText(QApplication::translate("MainWindow", "STATUS", 0));
        title->setText(QApplication::translate("MainWindow", "2048", 0));
        NewGame->setText(QApplication::translate("MainWindow", "New Game", 0));
        body->setText(QString());
        cell_1->setText(QApplication::translate("MainWindow", "1", 0));
        cell_2->setText(QApplication::translate("MainWindow", "1", 0));
        cell_3->setText(QApplication::translate("MainWindow", "1", 0));
        cell_4->setText(QApplication::translate("MainWindow", "1", 0));
        cell_5->setText(QApplication::translate("MainWindow", "1", 0));
        cell_6->setText(QApplication::translate("MainWindow", "1", 0));
        cell_7->setText(QApplication::translate("MainWindow", "1", 0));
        cell_8->setText(QApplication::translate("MainWindow", "1", 0));
        cell_9->setText(QApplication::translate("MainWindow", "1", 0));
        cell_10->setText(QApplication::translate("MainWindow", "1", 0));
        cell_11->setText(QApplication::translate("MainWindow", "1", 0));
        cell_12->setText(QApplication::translate("MainWindow", "1", 0));
        cell_13->setText(QApplication::translate("MainWindow", "1", 0));
        cell_14->setText(QApplication::translate("MainWindow", "1", 0));
        cell_15->setText(QApplication::translate("MainWindow", "1", 0));
        cell_16->setText(QApplication::translate("MainWindow", "1", 0));
        status->setText(QApplication::translate("MainWindow", "GAME", 0));
        score->setText(QApplication::translate("MainWindow", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
