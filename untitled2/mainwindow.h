#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "updatespon.h"
#include <QStandardItemModel>
#include <QDateTime>
#include <QMessageBox>
#include <QSqlDatabase>
#include "sponsor.h"
#include <QSqlQueryModel>
#include <QTableView>
#include"connection.h"
#include <QSortFilterProxyModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_spon_clicked();

    void on_pushButton_stidio_clicked();

    void on_pushButton_2_clicked();

    void on_home_clicked();

    void on_ajoutersponsor_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

    void on_ref_clicked();

    void on_rechercher_clicked();



    void on_trier_clicked();



    void on_pddf_clicked();

private:
    Ui::MainWindow *ui;
    updatespon *Updatespon;
    sponsor S;
    QSortFilterProxyModel *proxyModel;



};
#endif // MAINWINDOW_H
