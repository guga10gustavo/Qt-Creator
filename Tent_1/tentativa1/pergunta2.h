#ifndef PERGUNTA2_H
#define PERGUNTA2_H

#include <QWidget>
#include<questoes.h>


namespace Ui {
class Pergunta2;
}

class Pergunta2 : public QWidget
{
    Q_OBJECT

public:
    explicit Pergunta2(QWidget *parent = nullptr);
    ~Pergunta2();
    Questoes questoes;

private:
    Ui::Pergunta2 *ui;

};

#endif // PERGUNTA2_H
