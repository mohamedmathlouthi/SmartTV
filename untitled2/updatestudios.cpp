#include "updatestudios.h"
#include "ui_updatestudios.h"
#include <QMessageBox>
#include "gs_studio.h"
updatestudios::updatestudios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updatestudios)
{
    ui->setupUi(this);
}

updatestudios::~updatestudios()
{
    delete ui;
}


void updatestudios::setDisplayedData(const QString &data1, const QString &data2, const QString &data3,const QString &data4, const QString &data5, const QDateTime &data6,const QDateTime &data7, const QString &data8)
{
    ui->nom->setText(data1);
    ui->id1->setText(data2);
    ui->loc->setText(data3);
    ui->eq->setText(data4);
    ui->id2->setText(data5);
    ui->date1->setDateTime(data6);
    ui->date2->setDateTime(data7);
    ui->cout->setText(data8);

}

void updatestudios::on_pushButton_clicked()
{
    QString Nom_S = ui->nom->text();
    int ID_S = ui->id1->text().toInt();
    QString localisation = ui->loc->text();
    QString equipement = ui->eq->text();
    int ID_E = ui->id2->text().toInt();
    QDateTime Dispo_de = ui->date1->dateTime();
    QDateTime Dispo_a = ui->date2->dateTime();
    float cout_l = ui->cout->text().toFloat();
    QString Status = ui->stat->currentText();
    gs_studio S(Nom_S, ID_S, localisation, equipement, ID_E, Dispo_de, Dispo_a, cout_l, Status);
    bool test = S.modifier();
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
