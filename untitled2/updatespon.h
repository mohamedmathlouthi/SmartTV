#ifndef UPDATESPON_H
#define UPDATESPON_H
#include "sponsor.h"
#include <QDialog>

namespace Ui {
class updatespon;
}

class updatespon : public QDialog
{
    Q_OBJECT

public:
    explicit updatespon(QWidget *parent = nullptr);
    ~updatespon();
    void setDisplayedData(const QString &data1, const QString &data2, const QDate &data3,const QDate &data4, const QString &data5, const QString &data6);


private slots:
    void on_pushButton_clicked();

private:
    Ui::updatespon *ui;
};

#endif // UPDATESPON_H
