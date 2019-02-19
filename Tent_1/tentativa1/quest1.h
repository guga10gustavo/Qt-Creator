#ifndef QUEST1_H
#define QUEST1_H

#include <QWidget>

namespace Ui {
class Quest1;
}

class Quest1 : public QWidget
{
    Q_OBJECT

public:
    explicit Quest1(QWidget *parent = nullptr);
    ~Quest1();

private:
    Ui::Quest1 *ui;
};

#endif // QUEST1_H
