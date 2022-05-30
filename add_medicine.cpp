#include "add_medicine.h"
#include "ui_add_medicine.h"

add_medicine::add_medicine(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::add_medicine)
{
    ui->setupUi(this);
}

add_medicine::~add_medicine()
{
    delete ui;
}
