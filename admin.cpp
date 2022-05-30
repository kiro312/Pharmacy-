#include "admin.h"
#include "ui_admin.h"
#include<QMessageBox>
#include<QFile>
#include<fstream>
#include<QTextStream>
#include<iostream>
#include<QFileDialog>
using namespace std;
admin::admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textBrowser);
}
admin::~admin()
{
    delete ui;
}

