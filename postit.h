#ifndef POSTIT_H
#define POSTIT_H

#include <QLabel>

class Postit : public QLabel{
protected:
    QString data;
    QString descricao;
public:
    Postit(QWidget* parent = nullptr);
    virtual void paintEvent(QPaintEvent *event) = 0;
};

#endif // POSTIT_H
