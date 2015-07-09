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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <buttonclick.h>
#include <newgame.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    ButtonClick *button_6;
    ButtonClick *button_38;
    ButtonClick *button_8;
    ButtonClick *button_10;
    ButtonClick *button_14;
    ButtonClick *button_15;
    ButtonClick *button_11;
    ButtonClick *button_17;
    ButtonClick *button_12;
    ButtonClick *button_18;
    ButtonClick *button_19;
    ButtonClick *button_20;
    ButtonClick *button_21;
    ButtonClick *button_22;
    ButtonClick *button_23;
    ButtonClick *button_24;
    ButtonClick *button_25;
    ButtonClick *button_26;
    ButtonClick *button_27;
    ButtonClick *button_28;
    ButtonClick *button_29;
    ButtonClick *button_30;
    ButtonClick *button_31;
    ButtonClick *button_34;
    ButtonClick *button_32;
    ButtonClick *button_33;
    ButtonClick *button_35;
    ButtonClick *button_36;
    ButtonClick *button_9;
    ButtonClick *button_5;
    ButtonClick *button_13;
    ButtonClick *button_3;
    ButtonClick *button_2;
    ButtonClick *button_1;
    ButtonClick *button_4;
    ButtonClick *button_16;
    ButtonClick *button_7;
    ButtonClick *button_37;
    ButtonClick *button_41;
    ButtonClick *button_39;
    ButtonClick *button_40;
    ButtonClick *button_47;
    ButtonClick *button_42;
    ButtonClick *button_45;
    ButtonClick *button_43;
    ButtonClick *button_44;
    ButtonClick *button_46;
    ButtonClick *button_49;
    ButtonClick *button_48;
    ButtonClick *button_50;
    ButtonClick *button_51;
    ButtonClick *button_53;
    ButtonClick *button_52;
    ButtonClick *button_55;
    ButtonClick *button_54;
    ButtonClick *button_57;
    ButtonClick *button_56;
    ButtonClick *button_58;
    ButtonClick *button_61;
    ButtonClick *button_59;
    ButtonClick *button_60;
    ButtonClick *button_63;
    ButtonClick *button_62;
    ButtonClick *button_64;
    QLabel *BG;
    QLabel *SCORE_name;
    QLabel *SCORE;
    newgame *RESET;
    QLabel *star_1;
    QLabel *star_2;
    QLabel *star_3;
    QLabel *target_name;
    QLabel *target_total;
    QLabel *target;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 600);
        MainWindow->setMinimumSize(QSize(500, 600));
        MainWindow->setMaximumSize(QSize(500, 600));
        MainWindow->setSizeIncrement(QSize(500, 600));
        MainWindow->setBaseSize(QSize(500, 600));
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 60, 461, 511));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_6 = new ButtonClick(gridLayoutWidget);
        button_6->setObjectName(QStringLiteral("button_6"));
        button_6->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_6->setScaledContents(true);

        gridLayout->addWidget(button_6, 0, 5, 1, 1);

        button_38 = new ButtonClick(gridLayoutWidget);
        button_38->setObjectName(QStringLiteral("button_38"));
        button_38->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_38->setScaledContents(true);

        gridLayout->addWidget(button_38, 4, 5, 1, 1);

        button_8 = new ButtonClick(gridLayoutWidget);
        button_8->setObjectName(QStringLiteral("button_8"));
        button_8->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_8->setScaledContents(true);

        gridLayout->addWidget(button_8, 0, 7, 1, 1);

        button_10 = new ButtonClick(gridLayoutWidget);
        button_10->setObjectName(QStringLiteral("button_10"));
        button_10->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_10->setScaledContents(true);

        gridLayout->addWidget(button_10, 1, 1, 1, 1);

        button_14 = new ButtonClick(gridLayoutWidget);
        button_14->setObjectName(QStringLiteral("button_14"));
        button_14->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_14->setScaledContents(true);

        gridLayout->addWidget(button_14, 1, 5, 1, 1);

        button_15 = new ButtonClick(gridLayoutWidget);
        button_15->setObjectName(QStringLiteral("button_15"));
        button_15->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_15->setScaledContents(true);

        gridLayout->addWidget(button_15, 1, 6, 1, 1);

        button_11 = new ButtonClick(gridLayoutWidget);
        button_11->setObjectName(QStringLiteral("button_11"));
        button_11->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_11->setScaledContents(true);

        gridLayout->addWidget(button_11, 1, 2, 1, 1);

        button_17 = new ButtonClick(gridLayoutWidget);
        button_17->setObjectName(QStringLiteral("button_17"));
        button_17->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_17->setScaledContents(true);

        gridLayout->addWidget(button_17, 2, 0, 1, 1);

        button_12 = new ButtonClick(gridLayoutWidget);
        button_12->setObjectName(QStringLiteral("button_12"));
        button_12->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_12->setScaledContents(true);

        gridLayout->addWidget(button_12, 1, 3, 1, 1);

        button_18 = new ButtonClick(gridLayoutWidget);
        button_18->setObjectName(QStringLiteral("button_18"));
        button_18->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_18->setScaledContents(true);

        gridLayout->addWidget(button_18, 2, 1, 1, 1);

        button_19 = new ButtonClick(gridLayoutWidget);
        button_19->setObjectName(QStringLiteral("button_19"));
        button_19->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_19->setScaledContents(true);

        gridLayout->addWidget(button_19, 2, 2, 1, 1);

        button_20 = new ButtonClick(gridLayoutWidget);
        button_20->setObjectName(QStringLiteral("button_20"));
        button_20->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_20->setScaledContents(true);

        gridLayout->addWidget(button_20, 2, 3, 1, 1);

        button_21 = new ButtonClick(gridLayoutWidget);
        button_21->setObjectName(QStringLiteral("button_21"));
        button_21->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_21->setScaledContents(true);

        gridLayout->addWidget(button_21, 2, 4, 1, 1);

        button_22 = new ButtonClick(gridLayoutWidget);
        button_22->setObjectName(QStringLiteral("button_22"));
        button_22->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_22->setScaledContents(true);

        gridLayout->addWidget(button_22, 2, 5, 1, 1);

        button_23 = new ButtonClick(gridLayoutWidget);
        button_23->setObjectName(QStringLiteral("button_23"));
        button_23->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_23->setScaledContents(true);

        gridLayout->addWidget(button_23, 2, 6, 1, 1);

        button_24 = new ButtonClick(gridLayoutWidget);
        button_24->setObjectName(QStringLiteral("button_24"));
        button_24->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_24->setScaledContents(true);

        gridLayout->addWidget(button_24, 2, 7, 1, 1);

        button_25 = new ButtonClick(gridLayoutWidget);
        button_25->setObjectName(QStringLiteral("button_25"));
        button_25->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_25->setScaledContents(true);

        gridLayout->addWidget(button_25, 3, 0, 1, 1);

        button_26 = new ButtonClick(gridLayoutWidget);
        button_26->setObjectName(QStringLiteral("button_26"));
        button_26->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_26->setScaledContents(true);

        gridLayout->addWidget(button_26, 3, 1, 1, 1);

        button_27 = new ButtonClick(gridLayoutWidget);
        button_27->setObjectName(QStringLiteral("button_27"));
        button_27->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_27->setScaledContents(true);

        gridLayout->addWidget(button_27, 3, 2, 1, 1);

        button_28 = new ButtonClick(gridLayoutWidget);
        button_28->setObjectName(QStringLiteral("button_28"));
        button_28->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_28->setScaledContents(true);

        gridLayout->addWidget(button_28, 3, 3, 1, 1);

        button_29 = new ButtonClick(gridLayoutWidget);
        button_29->setObjectName(QStringLiteral("button_29"));
        button_29->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_29->setScaledContents(true);

        gridLayout->addWidget(button_29, 3, 4, 1, 1);

        button_30 = new ButtonClick(gridLayoutWidget);
        button_30->setObjectName(QStringLiteral("button_30"));
        button_30->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_30->setScaledContents(true);

        gridLayout->addWidget(button_30, 3, 5, 1, 1);

        button_31 = new ButtonClick(gridLayoutWidget);
        button_31->setObjectName(QStringLiteral("button_31"));
        button_31->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_31->setScaledContents(true);

        gridLayout->addWidget(button_31, 3, 6, 1, 1);

        button_34 = new ButtonClick(gridLayoutWidget);
        button_34->setObjectName(QStringLiteral("button_34"));
        button_34->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_34->setScaledContents(true);

        gridLayout->addWidget(button_34, 4, 1, 1, 1);

        button_32 = new ButtonClick(gridLayoutWidget);
        button_32->setObjectName(QStringLiteral("button_32"));
        button_32->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_32->setScaledContents(true);

        gridLayout->addWidget(button_32, 3, 7, 1, 1);

        button_33 = new ButtonClick(gridLayoutWidget);
        button_33->setObjectName(QStringLiteral("button_33"));
        button_33->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_33->setScaledContents(true);

        gridLayout->addWidget(button_33, 4, 0, 1, 1);

        button_35 = new ButtonClick(gridLayoutWidget);
        button_35->setObjectName(QStringLiteral("button_35"));
        button_35->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_35->setScaledContents(true);

        gridLayout->addWidget(button_35, 4, 2, 1, 1);

        button_36 = new ButtonClick(gridLayoutWidget);
        button_36->setObjectName(QStringLiteral("button_36"));
        button_36->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_36->setScaledContents(true);

        gridLayout->addWidget(button_36, 4, 3, 1, 1);

        button_9 = new ButtonClick(gridLayoutWidget);
        button_9->setObjectName(QStringLiteral("button_9"));
        button_9->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_9->setScaledContents(true);

        gridLayout->addWidget(button_9, 1, 0, 1, 1);

        button_5 = new ButtonClick(gridLayoutWidget);
        button_5->setObjectName(QStringLiteral("button_5"));
        button_5->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_5->setScaledContents(true);

        gridLayout->addWidget(button_5, 0, 4, 1, 1);

        button_13 = new ButtonClick(gridLayoutWidget);
        button_13->setObjectName(QStringLiteral("button_13"));
        button_13->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_13->setScaledContents(true);

        gridLayout->addWidget(button_13, 1, 4, 1, 1);

        button_3 = new ButtonClick(gridLayoutWidget);
        button_3->setObjectName(QStringLiteral("button_3"));
        button_3->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_3->setScaledContents(true);

        gridLayout->addWidget(button_3, 0, 2, 1, 1);

        button_2 = new ButtonClick(gridLayoutWidget);
        button_2->setObjectName(QStringLiteral("button_2"));
        button_2->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_2->setScaledContents(true);

        gridLayout->addWidget(button_2, 0, 1, 1, 1);

        button_1 = new ButtonClick(gridLayoutWidget);
        button_1->setObjectName(QStringLiteral("button_1"));
        button_1->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_1->setScaledContents(true);

        gridLayout->addWidget(button_1, 0, 0, 1, 1);

        button_4 = new ButtonClick(gridLayoutWidget);
        button_4->setObjectName(QStringLiteral("button_4"));
        button_4->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_4->setScaledContents(true);

        gridLayout->addWidget(button_4, 0, 3, 1, 1);

        button_16 = new ButtonClick(gridLayoutWidget);
        button_16->setObjectName(QStringLiteral("button_16"));
        button_16->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_16->setScaledContents(true);

        gridLayout->addWidget(button_16, 1, 7, 1, 1);

        button_7 = new ButtonClick(gridLayoutWidget);
        button_7->setObjectName(QStringLiteral("button_7"));
        button_7->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_7->setScaledContents(true);

        gridLayout->addWidget(button_7, 0, 6, 1, 1);

        button_37 = new ButtonClick(gridLayoutWidget);
        button_37->setObjectName(QStringLiteral("button_37"));
        button_37->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_37->setScaledContents(true);

        gridLayout->addWidget(button_37, 4, 4, 1, 1);

        button_41 = new ButtonClick(gridLayoutWidget);
        button_41->setObjectName(QStringLiteral("button_41"));
        button_41->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_41->setScaledContents(true);

        gridLayout->addWidget(button_41, 5, 0, 1, 1);

        button_39 = new ButtonClick(gridLayoutWidget);
        button_39->setObjectName(QStringLiteral("button_39"));
        button_39->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_39->setScaledContents(true);

        gridLayout->addWidget(button_39, 4, 6, 1, 1);

        button_40 = new ButtonClick(gridLayoutWidget);
        button_40->setObjectName(QStringLiteral("button_40"));
        button_40->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_40->setScaledContents(true);

        gridLayout->addWidget(button_40, 4, 7, 1, 1);

        button_47 = new ButtonClick(gridLayoutWidget);
        button_47->setObjectName(QStringLiteral("button_47"));
        button_47->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_47->setScaledContents(true);

        gridLayout->addWidget(button_47, 5, 6, 1, 1);

        button_42 = new ButtonClick(gridLayoutWidget);
        button_42->setObjectName(QStringLiteral("button_42"));
        button_42->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_42->setScaledContents(true);

        gridLayout->addWidget(button_42, 5, 1, 1, 1);

        button_45 = new ButtonClick(gridLayoutWidget);
        button_45->setObjectName(QStringLiteral("button_45"));
        button_45->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_45->setScaledContents(true);

        gridLayout->addWidget(button_45, 5, 4, 1, 1);

        button_43 = new ButtonClick(gridLayoutWidget);
        button_43->setObjectName(QStringLiteral("button_43"));
        button_43->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_43->setScaledContents(true);

        gridLayout->addWidget(button_43, 5, 2, 1, 1);

        button_44 = new ButtonClick(gridLayoutWidget);
        button_44->setObjectName(QStringLiteral("button_44"));
        button_44->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_44->setScaledContents(true);

        gridLayout->addWidget(button_44, 5, 3, 1, 1);

        button_46 = new ButtonClick(gridLayoutWidget);
        button_46->setObjectName(QStringLiteral("button_46"));
        button_46->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_46->setScaledContents(true);

        gridLayout->addWidget(button_46, 5, 5, 1, 1);

        button_49 = new ButtonClick(gridLayoutWidget);
        button_49->setObjectName(QStringLiteral("button_49"));
        button_49->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_49->setScaledContents(true);

        gridLayout->addWidget(button_49, 6, 0, 1, 1);

        button_48 = new ButtonClick(gridLayoutWidget);
        button_48->setObjectName(QStringLiteral("button_48"));
        button_48->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_48->setScaledContents(true);

        gridLayout->addWidget(button_48, 5, 7, 1, 1);

        button_50 = new ButtonClick(gridLayoutWidget);
        button_50->setObjectName(QStringLiteral("button_50"));
        button_50->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_50->setScaledContents(true);

        gridLayout->addWidget(button_50, 6, 1, 1, 1);

        button_51 = new ButtonClick(gridLayoutWidget);
        button_51->setObjectName(QStringLiteral("button_51"));
        button_51->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_51->setScaledContents(true);

        gridLayout->addWidget(button_51, 6, 2, 1, 1);

        button_53 = new ButtonClick(gridLayoutWidget);
        button_53->setObjectName(QStringLiteral("button_53"));
        button_53->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_53->setScaledContents(true);

        gridLayout->addWidget(button_53, 6, 4, 1, 1);

        button_52 = new ButtonClick(gridLayoutWidget);
        button_52->setObjectName(QStringLiteral("button_52"));
        button_52->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_52->setScaledContents(true);

        gridLayout->addWidget(button_52, 6, 3, 1, 1);

        button_55 = new ButtonClick(gridLayoutWidget);
        button_55->setObjectName(QStringLiteral("button_55"));
        button_55->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_55->setScaledContents(true);

        gridLayout->addWidget(button_55, 6, 6, 1, 1);

        button_54 = new ButtonClick(gridLayoutWidget);
        button_54->setObjectName(QStringLiteral("button_54"));
        button_54->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_54->setScaledContents(true);

        gridLayout->addWidget(button_54, 6, 5, 1, 1);

        button_57 = new ButtonClick(gridLayoutWidget);
        button_57->setObjectName(QStringLiteral("button_57"));
        button_57->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_57->setScaledContents(true);

        gridLayout->addWidget(button_57, 7, 0, 1, 1);

        button_56 = new ButtonClick(gridLayoutWidget);
        button_56->setObjectName(QStringLiteral("button_56"));
        button_56->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_56->setScaledContents(true);

        gridLayout->addWidget(button_56, 6, 7, 1, 1);

        button_58 = new ButtonClick(gridLayoutWidget);
        button_58->setObjectName(QStringLiteral("button_58"));
        button_58->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_58->setScaledContents(true);

        gridLayout->addWidget(button_58, 7, 1, 1, 1);

        button_61 = new ButtonClick(gridLayoutWidget);
        button_61->setObjectName(QStringLiteral("button_61"));
        button_61->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_61->setScaledContents(true);

        gridLayout->addWidget(button_61, 7, 4, 1, 1);

        button_59 = new ButtonClick(gridLayoutWidget);
        button_59->setObjectName(QStringLiteral("button_59"));
        button_59->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_59->setScaledContents(true);

        gridLayout->addWidget(button_59, 7, 2, 1, 1);

        button_60 = new ButtonClick(gridLayoutWidget);
        button_60->setObjectName(QStringLiteral("button_60"));
        button_60->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_60->setScaledContents(true);

        gridLayout->addWidget(button_60, 7, 3, 1, 1);

        button_63 = new ButtonClick(gridLayoutWidget);
        button_63->setObjectName(QStringLiteral("button_63"));
        button_63->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_63->setScaledContents(true);

        gridLayout->addWidget(button_63, 7, 6, 1, 1);

        button_62 = new ButtonClick(gridLayoutWidget);
        button_62->setObjectName(QStringLiteral("button_62"));
        button_62->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_62->setScaledContents(true);

        gridLayout->addWidget(button_62, 7, 5, 1, 1);

        button_64 = new ButtonClick(gridLayoutWidget);
        button_64->setObjectName(QStringLiteral("button_64"));
        button_64->setPixmap(QPixmap(QString::fromUtf8(":/image/button/1.png")));
        button_64->setScaledContents(true);

        gridLayout->addWidget(button_64, 7, 7, 1, 1);

        BG = new QLabel(centralWidget);
        BG->setObjectName(QStringLiteral("BG"));
        BG->setGeometry(QRect(20, 60, 461, 511));
        BG->setStyleSheet(QStringLiteral("background-color: rgb(80, 119, 162);"));
        SCORE_name = new QLabel(centralWidget);
        SCORE_name->setObjectName(QStringLiteral("SCORE_name"));
        SCORE_name->setGeometry(QRect(310, 30, 71, 21));
        QFont font;
        font.setFamily(QStringLiteral("LiHei Pro"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        SCORE_name->setFont(font);
        SCORE_name->setStyleSheet(QStringLiteral("font: 75 9pt \"LiHei Pro\";"));
        SCORE_name->setAlignment(Qt::AlignCenter);
        SCORE = new QLabel(centralWidget);
        SCORE->setObjectName(QStringLiteral("SCORE"));
        SCORE->setGeometry(QRect(380, 30, 91, 21));
        SCORE->setFont(font);
        SCORE->setStyleSheet(QStringLiteral("font: 75 9pt \"LiHei Pro\";"));
        SCORE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        RESET = new newgame(centralWidget);
        RESET->setObjectName(QStringLiteral("RESET"));
        RESET->setGeometry(QRect(50, 10, 111, 31));
        RESET->setStyleSheet(QLatin1String("background-color: rgb(32, 255, 207);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \"LiHei Pro\";"));
        RESET->setAlignment(Qt::AlignCenter);
        star_1 = new QLabel(centralWidget);
        star_1->setObjectName(QStringLiteral("star_1"));
        star_1->setGeometry(QRect(320, 0, 31, 31));
        star_1->setPixmap(QPixmap(QString::fromUtf8(":/image/button/star.png")));
        star_1->setScaledContents(true);
        star_2 = new QLabel(centralWidget);
        star_2->setObjectName(QStringLiteral("star_2"));
        star_2->setGeometry(QRect(350, 0, 31, 31));
        star_2->setPixmap(QPixmap(QString::fromUtf8(":/image/button/star.png")));
        star_2->setScaledContents(true);
        star_3 = new QLabel(centralWidget);
        star_3->setObjectName(QStringLiteral("star_3"));
        star_3->setGeometry(QRect(380, 0, 31, 31));
        star_3->setPixmap(QPixmap(QString::fromUtf8(":/image/button/star.png")));
        star_3->setScaledContents(true);
        target_name = new QLabel(centralWidget);
        target_name->setObjectName(QStringLiteral("target_name"));
        target_name->setGeometry(QRect(180, 10, 131, 16));
        target_name->setStyleSheet(QStringLiteral("font: 75 12pt \"LiHei Pro\";"));
        target_name->setAlignment(Qt::AlignCenter);
        target_total = new QLabel(centralWidget);
        target_total->setObjectName(QStringLiteral("target_total"));
        target_total->setGeometry(QRect(240, 30, 41, 21));
        target_total->setFont(font);
        target_total->setStyleSheet(QStringLiteral("font: 75 9pt \"LiHei Pro\";"));
        target_total->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        target = new QLabel(centralWidget);
        target->setObjectName(QStringLiteral("target"));
        target->setGeometry(QRect(180, 30, 51, 21));
        target->setFont(font);
        target->setStyleSheet(QStringLiteral("font: 75 9pt \"LiHei Pro\";"));
        target->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);
        BG->raise();
        gridLayoutWidget->raise();
        SCORE_name->raise();
        SCORE->raise();
        RESET->raise();
        star_1->raise();
        star_2->raise();
        star_3->raise();
        target_name->raise();
        target_total->raise();
        target->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        button_6->setText(QString());
        button_38->setText(QString());
        button_8->setText(QString());
        button_10->setText(QString());
        button_14->setText(QString());
        button_15->setText(QString());
        button_11->setText(QString());
        button_17->setText(QString());
        button_12->setText(QString());
        button_18->setText(QString());
        button_19->setText(QString());
        button_20->setText(QString());
        button_21->setText(QString());
        button_22->setText(QString());
        button_23->setText(QString());
        button_24->setText(QString());
        button_25->setText(QString());
        button_26->setText(QString());
        button_27->setText(QString());
        button_28->setText(QString());
        button_29->setText(QString());
        button_30->setText(QString());
        button_31->setText(QString());
        button_34->setText(QString());
        button_32->setText(QString());
        button_33->setText(QString());
        button_35->setText(QString());
        button_36->setText(QString());
        button_9->setText(QString());
        button_5->setText(QString());
        button_13->setText(QString());
        button_3->setText(QString());
        button_2->setText(QString());
        button_1->setText(QString());
        button_4->setText(QString());
        button_16->setText(QString());
        button_7->setText(QString());
        button_37->setText(QString());
        button_41->setText(QString());
        button_39->setText(QString());
        button_40->setText(QString());
        button_47->setText(QString());
        button_42->setText(QString());
        button_45->setText(QString());
        button_43->setText(QString());
        button_44->setText(QString());
        button_46->setText(QString());
        button_49->setText(QString());
        button_48->setText(QString());
        button_50->setText(QString());
        button_51->setText(QString());
        button_53->setText(QString());
        button_52->setText(QString());
        button_55->setText(QString());
        button_54->setText(QString());
        button_57->setText(QString());
        button_56->setText(QString());
        button_58->setText(QString());
        button_61->setText(QString());
        button_59->setText(QString());
        button_60->setText(QString());
        button_63->setText(QString());
        button_62->setText(QString());
        button_64->setText(QString());
        BG->setText(QString());
        SCORE_name->setText(QApplication::translate("MainWindow", "SCORE:", 0));
        SCORE->setText(QApplication::translate("MainWindow", "0", 0));
        RESET->setText(QApplication::translate("MainWindow", "RESET", 0));
        star_1->setText(QString());
        star_2->setText(QString());
        star_3->setText(QString());
        target_name->setText(QApplication::translate("MainWindow", "Target: 30move", 0));
        target_total->setText(QApplication::translate("MainWindow", "/ 200", 0));
        target->setText(QApplication::translate("MainWindow", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
