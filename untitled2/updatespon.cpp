#include "updatespon.h"
#include "ui_updatespon.h"
#include "sponsor.h"
#include <QMessageBox>

updatespon::updatespon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updatespon)
{
    ui->setupUi(this);
}

updatespon::~updatespon()
{
    delete ui;
}
void updatespon::setDisplayedData(const QString &data1, const QString &data2, const QDate &data3,const QDate &data4, const QString &data5, const QString &data6)
{
    ui->id1->setText(data1);
    ui->nom->setText(data2);
    ui->date1->setDate(data3);
    ui->date2->setDate(data4);
    ui->marq->setText(data6);
    ui->prix->setText(data5);
}
void updatespon::on_pushButton_clicked()
{
    int ID_S = ui->id1->text().toInt();
    QString Nom_S = ui->nom->text();
    QDate Date_de = ui->date1->date();
    QDate Date_a = ui->date2->date();
    QString marque = ui->marq->text();
    float prix = ui->prix->text().toFloat();
    sponsor s1(ID_S,Nom_S,Date_de,Date_a, prix , marque);
    bool test = s1.modifier();
    if (test)
    {
        // Si l'ajout est réussi, affichez les valeurs dans le message d'information.
        QMessageBox::information(this, tr("OK"),
                                 tr("modification effectué:\n"
                                    "Cliquez sur Annuler pour quitter."));
    }
    else
    {
        // En cas d'échec, affichez également les valeurs.
        QMessageBox::critical(this, tr("Erreur"),
                               tr("modification non effectué:\n"
                                  "Cliquez sur Annuler pour quitter."));
    }

    this->accept();

}
