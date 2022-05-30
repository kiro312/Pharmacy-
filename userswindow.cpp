#include "userswindow.h"
#include "ui_userswindow.h"

userswindow::userswindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userswindow)
{
    ui->setupUi(this);
}

userswindow::~userswindow()
{
    delete ui;
}
