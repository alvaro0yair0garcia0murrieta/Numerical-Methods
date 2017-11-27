#ifndef REGLINEALMULTI_H
#define REGLINEALMULTI_H

#include <QMainWindow>

namespace Ui {
class RegLinealMulti;
}

class RegLinealMulti : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegLinealMulti(QWidget *parent = 0);
    ~RegLinealMulti();

private:
    Ui::RegLinealMulti *ui;
private slots:
    void metodos7();
    void borrar7();
};

#endif // REGLINEALMULTI_H
