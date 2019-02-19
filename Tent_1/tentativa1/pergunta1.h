#ifndef PERGUNTA1_H
#define PERGUNTA1_H

#include <QWidget>
#include <continua1.h>
#include<quest1.h>

namespace Ui {
class Pergunta1;
}

class Pergunta1 : public QWidget
{
    Q_OBJECT

public:
    explicit Pergunta1(QWidget *parent = nullptr);
    ~Pergunta1();

private slots:

    void temporizador();

private:
    Ui::Pergunta1 *ui;
    Continua1 continua1;
    Quest1 quest1;
};

#endif // PERGUNTA1_H
