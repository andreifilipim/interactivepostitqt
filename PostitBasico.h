#ifndef POSTITBASICO_H
#define POSTITBASICO_H

#include "postit.h"


class PostitBasico : public Postit
{
public:
    PostitBasico(QString data, QString descricao, QWidget *parent);
    PostitBasico(QWidget* parent = nullptr);
    void paintEvent(QPaintEvent*);
};
#endif // POSTITBASICO_H
