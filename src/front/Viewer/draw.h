#ifndef DRAW_H
#define DRAW_H

#include <QOpenGLWidget>

class draw:public QOpenGLWidget
{
    Q_OBJECT

public:
    draw(QWidget *parent = Q_NULLPTR);
    void initializeGL();
    void resizeGL(int w, int h);
    void painGL();
private:
//    Ui::
};

#endif // DRAW_H
