#ifndef MET5_H
#define MET5_H

#include <QMainWindow>

namespace Ui {
class met5;
}

class met5 : public QMainWindow
{
    Q_OBJECT

public:
    explicit met5(QWidget *parent = 0);
    ~met5();
      double x[5][2];// Variables declaration

private:
    Ui::met5 *ui;

public slots:
    void metodo5(); //processes
    void borrar5(); //Clear
};

#endif // MET5_H
