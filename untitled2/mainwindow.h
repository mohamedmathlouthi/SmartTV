#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addstudio.h"
#include "updatestudios.h"
#include "gs_studio.h"
#include <QSqlQueryModel>
#include <QTableView>

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
    void on_pushButton_3_clicked();
    void on_pushButton_stidio_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;
    addstudio *Addstudio;
    updatestudios *Updatestudios;
    gs_studio G;

};
#endif // MAINWINDOW_H
