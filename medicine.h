#ifndef MEDICINE_H
#define MEDICINE_H

#include <QMainWindow>

namespace Ui {
class medicine;
}

class medicine : public QMainWindow
{
    Q_OBJECT

public:
    explicit medicine(QWidget *parent = nullptr);
    ~medicine();

private:
    Ui::medicine *ui;
};

#endif // MEDICINE_H
