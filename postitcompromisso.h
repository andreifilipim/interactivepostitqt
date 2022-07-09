#ifndef POSTITCOMPROMISSO_H
#define POSTITCOMPROMISSO_H

#include "postit.h"

class PostitCompromisso : public Postit
{
    QString tipo;         /*ver se tem como fazer herancao de alguns paramentro*/
    QString horario;
public:
    PostitCompromisso(QString data, QString tipo, QString descricao, QString horario, QWidget *parent);
    PostitCompromisso(QWidget* parent = nullptr);
    void paintEvent(QPaintEvent*);

};

#endif // POSTITCOMPROMISSO_H
