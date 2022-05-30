#include "main_admin.h"
#include "ui_main_admin.h"
#include "adminn.h"
#include "add_user.h"
#include "add_medicine.h"
#include "admin_order.h"
main_admin::main_admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_admin)
{
    ui->setupUi(this);
}

main_admin::~main_admin()
{
    delete ui;
}

void main_admin::on_pushButton_clicked()
{
    adminn=new class adminn();
    adminn->show();
}

void main_admin::on_pushButton_3_clicked()
{
   add_user=new class add_user();
   add_user->show();
}

void main_admin::on_pushButton_4_clicked()
{
    add_medicine = new class add_medicine();
    add_medicine->show();
}

void main_admin::on_pushButton_2_clicked()
{
    admin_order = new class admin_order();
    admin_order->show();
}
