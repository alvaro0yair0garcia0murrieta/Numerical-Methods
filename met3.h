#ifndef MET3_H
#define MET3_H

#include <QMainWindow>

namespace Ui {
class met3;
}

class met3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit met3(QWidget *parent = 0);
    ~met3();

private:
    Ui::met3 *ui;

public slots:
    void metod3o();//The functions slots for the program are declared
    void borra3r();
};

#endif // MET3_H
