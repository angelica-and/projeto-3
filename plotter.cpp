#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>


Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    QPen pen;
    QBrush brush;

    p.setRenderHint(QPainter::Antialiasing);

    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);
    p.setPen(pen);

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);
    p.setBrush(brush);

    p.setBrush(Qt::BDiagPattern);

    p.drawRect(0,0,width(),height());

    pen.setColor(QColor(0,0,0));
    pen.setWidth(1);
    pen.setStyle(Qt::SolidLine);
    p.setPen(pen);

    p.drawLine(0,height()/2, width(), height()/2);
    p.drawLine(0,height()/4, width(), height()/4);

}
