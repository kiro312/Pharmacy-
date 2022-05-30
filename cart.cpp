#include "cart.h"
#include "ui_cart.h"
#include "confirm_window.h"
cart::cart(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cart)
{
    ui->setupUi(this);
}

cart::~cart()
{
    delete ui;
}

void cart::on_pushButton_4_clicked()
{
    confirm_window=new class confirm_window();
    confirm_window->show();
}
