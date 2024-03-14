#include "mainwindow.h"
#include "sponsor.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQueryModel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), Updatespon(new updatespon)
{
    ui->setupUi(this);

    // Créez un QSortFilterProxyModel et configurez-le pour fonctionner avec votre modèle de données
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(S.afficher());
    ui->tablespon->setModel(proxyModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_pushButton_spon_clicked()
{
   ui->stackedWidget->setCurrentIndex(2);


}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_home_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_ajoutersponsor_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);







}

void MainWindow::on_pushButton_9_clicked()
{
    int ID_S = ui->lineEdit->text().toInt();
    QString nom = ui->lineEdit_2->text();
    float prix_sp = ui->lineEdit_6->text().toFloat();
            QString marque = ui->lineEdit_4->text();
            QDate date_debut = ui->dateEdit->date();
            QDate date_fin = ui->dateEdit_2->date();
            sponsor s(ID_S,nom, date_debut,date_fin, prix_sp, marque);
            bool test = s.ajouter();
            if(test)
           {
             QMessageBox::information(nullptr, QObject::tr("Ok"),
                                      QObject::tr("Ajout avec succés.\n "
                                                  "click cancel to exit . "),QMessageBox::Cancel);

            }
            else

                QMessageBox::information(nullptr, QObject::tr("Not Ok"),
                                         QObject::tr("Ajout impossible.\n "
                                                     "click cancel to exit . "),QMessageBox::Cancel);
                ui->tablespon->setModel(S.afficher());




          //nom
                QRegExp regexnom("[A-Za-z]+$");
                    if (!nom.contains(regexnom)) {
                        QMessageBox::critical(this, tr("Erreur"), tr("Le champ nom ne doit contenir que des lettres."), QMessageBox::Cancel);
                        return;
                    }

          //marque


                    QRegExp regexmarq("[A-Za-z]+$");
                        if (!marque.contains(regexmarq)) {
                            QMessageBox::critical(this, tr("Erreur"), tr("Le champ marque ne doit contenir que des lettres."), QMessageBox::Cancel);
                            return;
                        }


}
void MainWindow::on_pushButton_8_clicked()
{

    QModelIndex index = ui->tablespon->currentIndex();
           int row = index.row();
           QModelIndex col1Index = index.sibling(row, 0);
           QModelIndex col2Index = index.sibling(row, 1);
           QModelIndex col3Index = index.sibling(row, 2);
           QModelIndex col4Index = index.sibling(row, 3);
           QModelIndex col5Index = index.sibling(row, 4);
           QModelIndex col6Index = index.sibling(row, 5);
           QString data1 = ui->tablespon->model()->data(col1Index).toString();
           QString data2 = ui->tablespon->model()->data(col2Index).toString();
           QDate data3 = ui->tablespon->model()->data(col3Index).toDate();
           QDate data4 = ui->tablespon->model()->data(col4Index).toDate();
           QString data5 = ui->tablespon->model()->data(col5Index).toString();
           QString data6 = ui->tablespon->model()->data(col6Index).toString();
        Updatespon->setDisplayedData(data1, data2, data3,data4, data5, data6);
        Updatespon->open();

}

void MainWindow::on_pushButton_7_clicked()
{

    QModelIndex index=ui->tablespon->currentIndex();
        int i=index.row();
        QModelIndex in=index.sibling(i,0);
        int val=ui->tablespon->model()->data(in).toInt();
       sponsor s;
        bool test=s.supprimer(val);
        ui->tablespon->setModel(S.afficher());
        if (test)
        {
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("suppression effectué:\n"
                                                 "Cliquez sur Annuler pour quitter."),
                                     QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                  QObject::tr("suppression non effectué:\n"
                                              "Cliquez sur Annuler pour quitter."),
                                  QMessageBox::Cancel);
        }

}

void MainWindow::on_ref_clicked()
{
    ui->tablespon->setModel(S.afficher());
}

void MainWindow::on_rechercher_clicked()
{
    QString recherche = ui->lineEdit_recherche->text();
    QSqlQueryModel* model = S.rechercher(recherche);
    ui->tablespon->setModel(model);
}


void MainWindow::on_trier_clicked()
{

    ui->tablespon->setModel(S.trierParPrix());


}









