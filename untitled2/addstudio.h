#ifndef ADDSTUDIO_H
#define ADDSTUDIO_H

#include <QDialog>

namespace Ui {
class addstudio;
}

class addstudio : public QDialog
{
    Q_OBJECT

public:
    explicit addstudio(QWidget *parent = nullptr);
    ~addstudio();


private slots:
    void on_pushButton_clicked();

private:
    Ui::addstudio *ui;
};

#endif // ADDSTUDIO_H
