#ifndef DRAW_H
#define DRAW_H

#include <QOpenGLWidget>
#include <QtOpenGL>
#include <QtOpenGLWidgets/QtOpenGLWidgets>
#include <QOpenGLFunctions>
#include <QMessageBox>
#include <QWidget>

class draw:public QOpenGLWidget
{
    Q_OBJECT

public:
    draw(QWidget *parent = Q_NULLPTR);
     ~draw();
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    void displayVertices();

    int numV;
      int numL;

      int sizeH = 0;
      int sizeW = 0;

      double translation[3];
      double rotation[3];
      double scale;

      int typeVertices;
      int typeLines;

      int sizeVertices;
      int sizeLines;

      int projection;

      double maxSizeAxis;

      QColor colorVertices;
      QColor colorLines;
      QColor colorBackground;

//private:
//    Ui::
};

#endif // DRAW_H
