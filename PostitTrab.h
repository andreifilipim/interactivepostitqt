#ifndef POSTITTRAB_H
#define POSTITTRAB_H

#include "postit.h"

class PostitTrab : public Postit
{
    QString disciplina;

public:
    PostitTrab(QString data, QString disciplina, QString descricao, QWidget *parent);
    PostitTrab(QWidget* parent = nullptr);
    void paintEvent(QPaintEvent*);


};

#endif // POSTITTRAB_H
