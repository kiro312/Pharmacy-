#include "confirm_window.h"
#include "ui_confirm_window.h"

confirm_window::confirm_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::confirm_window)
{
    ui->setupUi(this);
}

confirm_window::~confirm_window()
{
    delete ui;
}
