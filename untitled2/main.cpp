#include "mainwindow.h"
#include "connection.h"
#include <QApplication>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/ressource/icon_n/icon_barreN/medical12-1.png"));

    Connection c;
    MainWindow w;
    bool test=c.createconnect();
    if(test)
   { w.show();
     QMessageBox::information(nullptr, QObject::tr("database is open"),
                              QObject::tr("connection successful.\n "
                                          "click cancel to exit . "),QMessageBox::Cancel);

    }
    else

        QMessageBox::information(nullptr, QObject::tr("database is not open"),
                                 QObject::tr("connection failed.\n "
                                             "click cancel to exit . "),QMessageBox::Cancel);















    return a.exec();
}
