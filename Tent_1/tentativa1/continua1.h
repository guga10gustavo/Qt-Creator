#ifndef CONTINUA1_H
#define CONTINUA1_H

#include <QWidget>

namespace Ui {
class Continua1;
}

class Continua1 : public QWidget
{
    Q_OBJECT

public:
    explicit Continua1(QWidget *parent = nullptr);
    ~Continua1();

private:
    Ui::Continua1 *ui;
};

#endif // CONTINUA1_H
