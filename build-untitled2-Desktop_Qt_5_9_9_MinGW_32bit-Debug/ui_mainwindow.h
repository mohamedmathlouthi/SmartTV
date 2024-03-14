/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *home;
    QLabel *label_3;
    QLabel *label_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QLabel *label_12;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *page_2;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_14;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_6;
    QLabel *label_20;
    QPushButton *pushButton_9;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QWidget *page_3;
    QLabel *ecran;
    QPushButton *ajoutersponsor;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QTableView *tablespon;
    QPushButton *ref;
    QLineEdit *lineEdit_recherche;
    QPushButton *rechercher;
    QPushButton *trier;
    QPushButton *pddf;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QPushButton *pushButton_spon;
    QLabel *label_7;
    QPushButton *pushButton_stidio;
    QLabel *label_8;
    QPushButton *pushButton_spectateur;
    QPushButton *pushButton_empole;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1440, 900);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 270, 900));
        label->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/backg.png\");"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 270, 19, 17));
        label_2->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/home.png\");"));
        home = new QPushButton(centralwidget);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(120, 270, 75, 23));
        QFont font;
        font.setFamily(QStringLiteral("MS Outlook"));
        font.setPointSize(12);
        home->setFont(font);
        home->setCursor(QCursor(Qt::BlankCursor));
        home->setFocusPolicy(Qt::ClickFocus);
        home->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 320, 12, 15));
        label_3->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/emm.png\");"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 370, 20, 16));
        label_4->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/em.png\");"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(270, 0, 1161, 871));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(-20, -20, 1400, 871));
        label_11->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/baaak.png\");"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 160, 300, 187));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/sponn.png\");"));
        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(280, -200, 481, 321));
        label_12->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/aaa.png\");"));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(400, 160, 300, 187));
        pushButton_4->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/specc.png\");"));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 380, 300, 187));
        pushButton_5->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/stu.png\");"));
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 160, 300, 187));
        pushButton_6->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/emi.png\");"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(-10, 0, 1191, 901));
        label_5->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/backkk.png\");"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(230, 80, 460, 720));
        label_10->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/Form1.png\");"));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(210, -130, 481, 321));
        label_14->setMaximumSize(QSize(490, 325));
        label_14->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/aaa.png\");"));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(270, 310, 371, 31));
        lineEdit->setMinimumSize(QSize(371, 0));
        lineEdit->setMaximumSize(QSize(371, 31));
        lineEdit_2 = new QLineEdit(page_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 370, 371, 31));
        lineEdit_2->setMaximumSize(QSize(371, 31));
        lineEdit_4 = new QLineEdit(page_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(270, 590, 371, 31));
        label_15 = new QLabel(page_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(240, 280, 81, 21));
        label_15->setMaximumSize(QSize(140, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_15->setFont(font1);
        label_15->setScaledContents(false);
        label_16 = new QLabel(page_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(240, 340, 35, 21));
        label_16->setMaximumSize(QSize(131, 21));
        label_16->setFont(font1);
        label_16->setScaledContents(false);
        label_17 = new QLabel(page_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(240, 560, 131, 21));
        label_17->setFont(font1);
        label_17->setScaledContents(false);
        label_18 = new QLabel(page_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(240, 490, 131, 21));
        label_18->setFont(font1);
        label_18->setScaledContents(false);
        label_19 = new QLabel(page_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(240, 410, 131, 21));
        label_19->setFont(font1);
        label_19->setScaledContents(false);
        lineEdit_6 = new QLineEdit(page_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(270, 660, 371, 31));
        label_20 = new QLabel(page_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(240, 630, 131, 21));
        label_20->setFont(font1);
        label_20->setScaledContents(false);
        pushButton_9 = new QPushButton(page_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(250, 730, 415, 45));
        pushButton_9->setStyleSheet(QLatin1String("background:url(\"C:/Users/ASUS/Desktop/QT_projet/Btn1.png\");\n"
"border: none;"));
        dateEdit = new QDateEdit(page_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(270, 440, 361, 41));
        dateEdit_2 = new QDateEdit(page_2);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(270, 520, 361, 41));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        ecran = new QLabel(page_3);
        ecran->setObjectName(QStringLiteral("ecran"));
        ecran->setGeometry(QRect(-10, 0, 1400, 841));
        ecran->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/baaak.png\");"));
        ajoutersponsor = new QPushButton(page_3);
        ajoutersponsor->setObjectName(QStringLiteral("ajoutersponsor"));
        ajoutersponsor->setGeometry(QRect(780, 40, 200, 44));
        ajoutersponsor->setCursor(QCursor(Qt::PointingHandCursor));
        ajoutersponsor->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/ajouter spon.png\");"));
        pushButton_7 = new QPushButton(page_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(920, 130, 35, 36));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QLatin1String("background:url(\"C:/Users/ASUS/Desktop/QT_projet/recii.png\");\n"
"border: none;"));
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(970, 130, 35, 35));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QLatin1String("background:url(\"C:/Users/ASUS/Desktop/QT_projet/klam.png\");\n"
"border: none;"));
        tablespon = new QTableView(page_3);
        tablespon->setObjectName(QStringLiteral("tablespon"));
        tablespon->setGeometry(QRect(110, 180, 951, 601));
        tablespon->setStyleSheet(QLatin1String("QTableView\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"QTableView::item:selected\n"
"{\n"
"	color:white;\n"
"	background-color: rgb(93, 93, 93);\n"
"	border: none;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"	border: none;\n"
"	background-color: qlineargradient(spread:pad, x1:0.989474, y1:0.977, x2:0.0214737, y2:0.085, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"	color: rgb(172, 172, 172);\n"
"}"));
        ref = new QPushButton(page_3);
        ref->setObjectName(QStringLiteral("ref"));
        ref->setGeometry(QRect(110, 140, 31, 31));
        ref->setCursor(QCursor(Qt::PointingHandCursor));
        ref->setStyleSheet(QLatin1String("background:url(\"C:/Users/ASUS/Desktop/QT_projet/ref.png\");\n"
"border:none;"));
        lineEdit_recherche = new QLineEdit(page_3);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(140, 40, 501, 51));
        rechercher = new QPushButton(page_3);
        rechercher->setObjectName(QStringLiteral("rechercher"));
        rechercher->setGeometry(QRect(650, 40, 51, 51));
        rechercher->setCursor(QCursor(Qt::PointingHandCursor));
        rechercher->setStyleSheet(QLatin1String("background:url(\"C:/Users/ASUS/Desktop/QT_projet/chercher1.png\");\n"
"border:none;"));
        trier = new QPushButton(page_3);
        trier->setObjectName(QStringLiteral("trier"));
        trier->setGeometry(QRect(160, 140, 31, 31));
        pddf = new QPushButton(page_3);
        pddf->setObjectName(QStringLiteral("pddf"));
        pddf->setGeometry(QRect(210, 140, 31, 28));
        stackedWidget->addWidget(page_3);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 320, 75, 23));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 420, 17, 15));
        label_6->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/spon.png\");"));
        pushButton_spon = new QPushButton(centralwidget);
        pushButton_spon->setObjectName(QStringLiteral("pushButton_spon"));
        pushButton_spon->setGeometry(QRect(110, 420, 75, 23));
        pushButton_spon->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_spon->setFocusPolicy(Qt::ClickFocus);
        pushButton_spon->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 470, 13, 17));
        label_7->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/stidio.png\");"));
        pushButton_stidio = new QPushButton(centralwidget);
        pushButton_stidio->setObjectName(QStringLiteral("pushButton_stidio"));
        pushButton_stidio->setGeometry(QRect(110, 470, 75, 23));
        pushButton_stidio->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 520, 15, 17));
        label_8->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/spectateur.png\");"));
        pushButton_spectateur = new QPushButton(centralwidget);
        pushButton_spectateur->setObjectName(QStringLiteral("pushButton_spectateur"));
        pushButton_spectateur->setGeometry(QRect(120, 520, 75, 23));
        pushButton_spectateur->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        pushButton_empole = new QPushButton(centralwidget);
        pushButton_empole->setObjectName(QStringLiteral("pushButton_empole"));
        pushButton_empole->setGeometry(QRect(120, 370, 75, 23));
        pushButton_empole->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 20, 147, 147));
        label_9->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/dar.png\");"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1440, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        home->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QString());
        label_11->setText(QString());
        pushButton_2->setText(QString());
        label_12->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        label_5->setText(QString());
        label_10->setText(QString());
        label_14->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "Id-sponsor", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Marque", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "duree fin", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "duree debut", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Prix-sponsor", Q_NULLPTR));
        pushButton_9->setText(QString());
        ecran->setText(QString());
        ajoutersponsor->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        ref->setText(QString());
        rechercher->setText(QString());
        trier->setText(QApplication::translate("MainWindow", "trier", Q_NULLPTR));
        pddf->setText(QApplication::translate("MainWindow", "pdf", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        label_6->setText(QString());
        pushButton_spon->setText(QApplication::translate("MainWindow", "Sponsors", Q_NULLPTR));
        label_7->setText(QString());
        pushButton_stidio->setText(QApplication::translate("MainWindow", "Stidios", Q_NULLPTR));
        label_8->setText(QString());
        pushButton_spectateur->setText(QApplication::translate("MainWindow", "Spectateurs", Q_NULLPTR));
        pushButton_empole->setText(QApplication::translate("MainWindow", "Employe", Q_NULLPTR));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
