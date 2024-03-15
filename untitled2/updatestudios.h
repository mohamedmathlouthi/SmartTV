#ifndef UPDATESTUDIOS_H
#define UPDATESTUDIOS_H

#include <QDialog>

namespace Ui {
class updatestudios;
}

class updatestudios : public QDialog
{
    Q_OBJECT

public:
    explicit updatestudios(QWidget *parent = nullptr);
    ~updatestudios();
    void setDisplayedData(const QString &data1, const QString &data2, const QString &data3,const QString &data4, const QString &data5, const QDateTime &data6,const QDateTime &data7, const QString &data8);

private slots:
    void on_pushButton_clicked();

private:
    Ui::updatestudios *ui;
};

#endif // UPDATESTUDIOS_H
