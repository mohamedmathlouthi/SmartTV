/********************************************************************************
** Form generated from reading UI file 'updatespon.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATESPON_H
#define UI_UPDATESPON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_updatespon
{
public:
    QLineEdit *nom;
    QLabel *label_20;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *id1;
    QGroupBox *groupBox;
    QLabel *label_15;
    QDateEdit *date1;
    QLineEdit *marq;
    QLabel *label_16;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *prix;
    QDateEdit *date2;
    QPushButton *pushButton;

    void setupUi(QDialog *updatespon)
    {
        if (updatespon->objectName().isEmpty())
            updatespon->setObjectName(QStringLiteral("updatespon"));
        updatespon->resize(1443, 882);
        updatespon->setStyleSheet(QStringLiteral("background:url(\"C:/Users/ASUS/Desktop/QT_projet/backkk.png\");"));
        nom = new QLineEdit(updatespon);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(520, 380, 371, 31));
        nom->setMaximumSize(QSize(371, 31));
        nom->setStyleSheet(QLatin1String("border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");\n"
"border:2px;"));
        label_20 = new QLabel(updatespon);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(490, 640, 131, 21));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_20->setFont(font);
        label_20->setStyleSheet(QLatin1String("border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");\n"
"color: rgb(198, 198, 198);"));
        label_20->setScaledContents(false);
        label_19 = new QLabel(updatespon);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(490, 420, 131, 21));
        label_19->setFont(font);
        label_19->setStyleSheet(QLatin1String("border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");\n"
"color: rgb(198, 198, 198);"));
        label_19->setScaledContents(false);
        label_18 = new QLabel(updatespon);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(490, 500, 131, 21));
        label_18->setFont(font);
        label_18->setStyleSheet(QLatin1String("border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");\n"
"color: rgb(198, 198, 198);"));
        label_18->setScaledContents(false);
        label_17 = new QLabel(updatespon);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(490, 570, 131, 21));
        label_17->setFont(font);
        label_17->setStyleSheet(QLatin1String("border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");\n"
"color: rgb(198, 198, 198);"));
        label_17->setScaledContents(false);
        label_2 = new QLabel(updatespon);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(510, 30, 351, 91));
        label_2->setStyleSheet(QLatin1String("\n"
"background:url(\"C:/Users/ASUS/Desktop/QT_projet/Tv_tally_mtarfeskhir 1.png\");"));
        label = new QLabel(updatespon);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 30, 581, 831));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String(" \n"
"border: none;\n"
"border-radius:45px;\n"
"border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");"));
        id1 = new QLineEdit(updatespon);
        id1->setObjectName(QStringLiteral("id1"));
        id1->setGeometry(QRect(520, 320, 371, 31));
        id1->setMinimumSize(QSize(371, 0));
        id1->setMaximumSize(QSize(371, 31));
        id1->setStyleSheet(QLatin1String("border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");\n"
"border:2px;"));
        groupBox = new QGroupBox(updatespon);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(470, 240, 461, 511));
        groupBox->setStyleSheet(QLatin1String("background:url(\"C:/Users/ASUS/Desktop/QT_projet/Solid_white.png\");\n"
"border:none;"));
        label_15 = new QLabel(updatespon);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(490, 290, 121, 21));
        label_15->setMaximumSize(QSize(140, 21));
        label_15->setFont(font);
        label_15->setStyleSheet(QLatin1String("color: rgb(198, 198, 198);\n"
"border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");"));
        label_15->setScaledContents(false);
        date1 = new QDateEdit(updatespon);
        date1->setObjectName(QStringLiteral("date1"));
        date1->setGeometry(QRect(520, 450, 361, 41));
        marq = new QLineEdit(updatespon);
        marq->setObjectName(QStringLiteral("marq"));
        marq->setGeometry(QRect(520, 600, 371, 31));
        marq->setStyleSheet(QLatin1String("border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");\n"
"border:2px;"));
        label_16 = new QLabel(updatespon);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(490, 350, 51, 21));
        label_16->setMaximumSize(QSize(131, 21));
        label_16->setFont(font);
        label_16->setStyleSheet(QLatin1String("color: rgb(198, 198, 198);\n"
"border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");"));
        label_16->setScaledContents(false);
        label_4 = new QLabel(updatespon);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(520, 190, 351, 20));
        QFont font2;
        font2.setPointSize(14);
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("color: rgb(198, 198, 198);\n"
"background-image: url(:/Solid_white.png);"));
        label_3 = new QLabel(updatespon);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(510, 140, 371, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Sans Serif"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setStyleSheet(QLatin1String("color: rgb(86, 44, 128);\n"
"background-image: url(:/Solid_white.png);"));
        prix = new QLineEdit(updatespon);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(520, 670, 371, 31));
        prix->setStyleSheet(QLatin1String("border-image:url(\"C:/Users/ASUS/Desktop/QT_projet//Solid_white.png\");\n"
"border:2px;"));
        date2 = new QDateEdit(updatespon);
        date2->setObjectName(QStringLiteral("date2"));
        date2->setGeometry(QRect(520, 530, 361, 41));
        pushButton = new QPushButton(updatespon);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 790, 451, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"MS Shell Dlg 2\";\n"
"border-radius:10px;\n"
"border: none;\n"
"background:url(\"C:/Users/ASUS/Desktop/QT_projet/Rectangle 1.png\");\n"
"}\n"
"QPushButton:hover{\n"
" \n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(131, 131, 131);\n"
"\n"
"}"));
        label->raise();
        groupBox->raise();
        nom->raise();
        label_20->raise();
        label_19->raise();
        label_18->raise();
        label_17->raise();
        label_2->raise();
        id1->raise();
        label_15->raise();
        date1->raise();
        marq->raise();
        label_16->raise();
        label_4->raise();
        label_3->raise();
        prix->raise();
        date2->raise();
        pushButton->raise();

        retranslateUi(updatespon);

        QMetaObject::connectSlotsByName(updatespon);
    } // setupUi

    void retranslateUi(QDialog *updatespon)
    {
        updatespon->setWindowTitle(QApplication::translate("updatespon", "Dialog", Q_NULLPTR));
        label_20->setText(QApplication::translate("updatespon", "Prix-sponsor", Q_NULLPTR));
        label_19->setText(QApplication::translate("updatespon", "duree debut", Q_NULLPTR));
        label_18->setText(QApplication::translate("updatespon", "duree fin", Q_NULLPTR));
        label_17->setText(QApplication::translate("updatespon", "Marque", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
        groupBox->setTitle(QString());
        label_15->setText(QApplication::translate("updatespon", "Id-sponsor", Q_NULLPTR));
        label_16->setText(QApplication::translate("updatespon", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("updatespon", "Entrer les coordonn\303\251es du sponsor", Q_NULLPTR));
        label_3->setText(QApplication::translate("updatespon", "Modifier un sponsor", Q_NULLPTR));
        pushButton->setText(QApplication::translate("updatespon", "Modifier", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updatespon: public Ui_updatespon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESPON_H
