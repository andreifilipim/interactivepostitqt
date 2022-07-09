#ifndef POSTITFESTA_H
#define POSTITFESTA_H

#include "postit.h"

class PostitFesta : public Postit
{
    QString estilo;         /*ver se tem como fazer herancao de alguns paramentro*/
    QString horario;
public:
    PostitFesta(QString data, QString estilo, QString descricao, QString horario, QWidget *parent);
    PostitFesta(QWidget* parent = nullptr);
    void paintEvent(QPaintEvent*);

};


#endif // POSTITFESTA_H
