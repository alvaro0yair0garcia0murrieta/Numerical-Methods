#ifndef KUTTA_H
#define KUTTA_H

#include <QDialog>

namespace Ui {
class Kutta;
}

class Kutta : public QDialog
{
    Q_OBJECT

public:
    explicit Kutta(QWidget *parent = 0);
    ~Kutta();
    double dy(double c);
    double y( double c);

private:
    Ui::Kutta *ui;
public slots:
    void Method_kottash_slot();
    void Erase_keso_kottage_slot();
};

#endif // KUTTA_H
