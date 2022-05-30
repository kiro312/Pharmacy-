#include "main_userwindow.h"
#include "ui_main_userwindow.h"
#include "medicine.h"
#include "cart.h"
main_userwindow::main_userwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_userwindow)
{
    ui->setupUi(this);
}

main_userwindow::~main_userwindow()
{
    delete ui;
}

void main_userwindow::on_pushButton_Medicines_clicked()
{

    medicine=new class medicine();
    medicine->show();
}

void main_userwindow::on_pushButton_Cart_clicked()
{
    cart=new class cart();
    cart->show();
}
