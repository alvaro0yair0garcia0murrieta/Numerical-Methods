#ifndef EULER_H
#define EULER_H

#include <QMainWindow>

namespace Ui {
class Euler;
}

class Euler : public QMainWindow
{
    Q_OBJECT

public:
    explicit Euler(QWidget *parent = 0);
    ~Euler();
    //Global function
    double funcion(double c);
    double funtion( double c);
private:
    Ui::Euler *ui;
public slots:
    //Slots funtion
    void Method_slot();
    void Erase_slot();
private slots:

};

#endif // EULER_H <- this
