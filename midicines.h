#ifndef MIDICINES_H
#define MIDICINES_H

#include <QMainWindow>

namespace Ui {
class Midicines;
}

class Midicines : public QMainWindow
{
    Q_OBJECT

public:
    explicit Midicines(QWidget *parent = nullptr);
    ~Midicines();

private:
    Ui::Midicines *ui;
};

#endif // MIDICINES_H
