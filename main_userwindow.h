#ifndef MAIN_USERWINDOW_H
#define MAIN_USERWINDOW_H

#include <QMainWindow>
#include "medicine.h"
#include "cart.h"
namespace Ui {
class main_userwindow;
}

class main_userwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit main_userwindow(QWidget *parent = nullptr);
    ~main_userwindow();

private slots:
    void on_pushButton_Medicines_clicked();

    void on_pushButton_Cart_clicked();

private:
    Ui::main_userwindow *ui;
    medicine *medicine;
    cart *cart;
};

#endif // MAIN_USERWINDOW_H
