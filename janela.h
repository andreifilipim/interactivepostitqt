#ifndef JANELA_H
#define JANELA_H

#include "postit.h"
#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>
#include <vector>
using namespace std;
class Janela : public QMainWindow
{
    Q_OBJECT
    QPushButton *basico, *trabalho, *compromisso, *festa;
    QTextEdit *editor;
protected:
    vector<Postit> *v;
public:
    explicit Janela(QWidget *parent = nullptr);
public slots:
    void CriarPostitTrab();
    void CriarPostitcompromisso();
    void CriarPostitBasico();
    void CriarPostitFesta();
    void mousePressEvent(QMouseEvent *event);
signals:
};

#endif // JANELA_H
