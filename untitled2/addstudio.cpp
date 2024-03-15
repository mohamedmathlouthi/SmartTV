#include "addstudio.h"
#include "ui_addstudio.h"
#include <QMessageBox>
#include "gs_studio.h"
#include "mainwindow.h"
addstudio::addstudio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addstudio)
{
    ui->setupUi(this);
}

addstudio::~addstudio()
{
    delete ui;
}
void addstudio::on_pushButton_clicked()
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
    bool test = S.ajouter();
    if (test)
    {
        // Si l'ajout est réussi, affichez les valeurs dans le message d'information.
        QMessageBox::information(this, tr("OK"),
                                 tr("Ajout effectué:\n"
                                    "Cliquez sur Annuler pour quitter."),
                        QMessageBox::Cancel);
    }
    else
    {
        // En cas d'échec, affichez également les valeurs.
        QMessageBox::critical(this, tr("Erreur"),
                               tr("Ajout non effectué:\n"
                                  "Cliquez sur Annuler pour quitter."),
                      QMessageBox::Cancel);
    }
    this->accept();
}


