#include "admin_order.h"
#include "ui_admin_order.h"

admin_order::admin_order(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_order)
{
    ui->setupUi(this);
}

admin_order::~admin_order()
{
    delete ui;
}
