#ifndef MET4_H
#define MET4_H

#include <QMainWindow>

namespace Ui {
class met4;
}

class met4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit met4(QWidget *parent = 0);
    ~met4();

private:
    Ui::met4 *ui;
private slots:
    void metodos4();
    void borrar4();
};

#endif // MET4_H
