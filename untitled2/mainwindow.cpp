#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAbstractItemModel>
#include <QStandardItemModel>
#include <QDateTime>
#include <QMessageBox>
#include <QSqlDatabase>
#include "gs_studio.h"
#include <QSqlQueryModel>
#include <QTableView>
#include"connection.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),Addstudio(new addstudio),Updatestudios(new updatestudios)
{
    ui->setupUi(this);
    ui->tab_stud->setModel(G.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_stidio_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_7_clicked()
{
   Addstudio->open();
}

void MainWindow::on_pushButton_9_clicked()
{
    QModelIndex index = ui->tab_stud->currentIndex();
       int row = index.row();
       QModelIndex col1Index = index.sibling(row, 0);
       QModelIndex col2Index = index.sibling(row, 1);
       QModelIndex col3Index = index.sibling(row, 2);
       QModelIndex col4Index = index.sibling(row, 3);
       QModelIndex col5Index = index.sibling(row, 4);
       QModelIndex col6Index = index.sibling(row, 5);
       QModelIndex col7Index = index.sibling(row, 6);
       QModelIndex col8Index = index.sibling(row, 7);

       QString data1 = ui->tab_stud->model()->data(col1Index).toString();
       QString data2 = ui->tab_stud->model()->data(col2Index).toString();
       QString data3 = ui->tab_stud->model()->data(col3Index).toString();
       QString data4 = ui->tab_stud->model()->data(col4Index).toString();
       QString data5 = ui->tab_stud->model()->data(col5Index).toString();
       QDateTime data6 = ui->tab_stud->model()->data(col6Index).toDateTime();
       QDateTime data7 = ui->tab_stud->model()->data(col7Index).toDateTime();
       QString data8 = ui->tab_stud->model()->data(col8Index).toString();

        Updatestudios->setDisplayedData(data1, data2, data3,data4, data5, data6,data7, data8);
    Updatestudios->open();
}

void MainWindow::on_pushButton_8_clicked()
{
    QModelIndex index=ui->tab_stud->currentIndex();
        int i=index.row();
        QModelIndex in=index.sibling(i,1);
        int val=ui->tab_stud->model()->data(in).toInt();
        gs_studio S1;
        bool test=S1.supprimer(val);
        ui->tab_stud->setModel(G.afficher());
        if (test)
        {
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("suppression effectué:\n"
                                                 "Cliquez sur Annuler pour quitter."),
                                     QMessageBox::Cancel);
         //   ui->tab_stud->setModel(G1.afficher());
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                  QObject::tr("suppression non effectué:\n"
                                              "Cliquez sur Annuler pour quitter."),
                                  QMessageBox::Cancel);
        }
}




void MainWindow::on_pushButton_10_clicked()
{
    ui->tab_stud->setModel(G.afficher());

}
