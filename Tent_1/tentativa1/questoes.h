#ifndef QUESTOES_H
#define QUESTOES_H

#include <QString>

class Questoes
{
public:
    Questoes();
    void setq1(const QString &r1);
    void setq2(const QString &r2);
    void steq3(const QString &r3);
    QString getq1() const;
    QString getq2() const;
    QString getq3() const;
    QString q1;
    QString q2;
    QString q3;

private:

};

#endif // QUESTOES_H
