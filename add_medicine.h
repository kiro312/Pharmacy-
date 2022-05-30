#ifndef ADD_MEDICINE_H
#define ADD_MEDICINE_H

#include <QMainWindow>

namespace Ui {
class add_medicine;
}

class add_medicine : public QMainWindow
{
    Q_OBJECT

public:
    explicit add_medicine(QWidget *parent = nullptr);
    ~add_medicine();

private:
    Ui::add_medicine *ui;
};

#endif // ADD_MEDICINE_H
