#ifndef QUEST1_H
#define QUEST1_H

#include <QWidget>
#include "questoes.h"
#include<pergunta2.h>

namespace Ui {
class Quest1;
}

class Quest1 : public QWidget
{
    Q_OBJECT

public:
    explicit Quest1(QWidget *parent = nullptr);
    ~Quest1();
    Questoes questoes;

private:
    Ui::Quest1 *ui;
    Pergunta2 pergunta2;
};

#endif // QUEST1_H
