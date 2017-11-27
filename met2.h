#ifndef MET2_H
#define MET2_H

#include <QMainWindow>

namespace Ui {
class met2;
}

class met2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit met2(QWidget *parent = 0);
    ~met2();
    double fp(double z);
    double df(double v);

private:
    Ui::met2 *ui;
public slots:

    void metodo2();
    void borar2();
};

#endif // MET2_H
