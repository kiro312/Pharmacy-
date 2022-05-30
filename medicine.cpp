#include "medicine.h"
#include "ui_medicine.h"
#include<QPixmap>
#include<QMessageBox>
#include<QFile>
#include<fstream>
#include<QTextStream>
#include<iostream>
#include<QString>
#include <string>
#include <string.h>
#include <QLatin1String>
using namespace std;
struct medi{
    QString meda_name;
};

medicine::medicine(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::medicine)
{

    ui->setupUi(this);
    QFile MEDI_FILE("C:/Users/asaid/OneDrive/Desktop/med_file");
    QTextStream in(&MEDI_FILE);
//    QString line = in.readLine();
//    new QListWidgetItem(line, ui->listWidget);
//    line = in.readLine();
    QString text = in.readAll();
    ui->comboBox_med->addItem(text);
    MEDI_FILE.close();
//    string med_name;
//    MEDI_FILE >> med_name;

//    QString Qmed_name = QString::fromStdString(med_name);

//ui->listWidget->addItem(Qmed_name);
//ui->comboBox_med->addItem(Qmed_name);

}

medicine::~medicine()
{
    delete ui;

}
