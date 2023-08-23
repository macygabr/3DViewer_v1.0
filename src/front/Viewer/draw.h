#ifndef DRAW_H
#define DRAW_H

#include <QMessageBox>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QWidget>
#include <QtOpenGL>
#include <QtOpenGLWidgets/QtOpenGLWidgets>

extern "C" {
#include "../../back/transformations.h"
}

class draw : public QOpenGLWidget {
  Q_OBJECT

 public:
  draw(QWidget *parent = Q_NULLPTR);
  ~draw();
  void initializeGL();
  void resizeGL(int w, int h);
  void paintGL();
  void displayVertices();

  dataNur test;
  char *file_name;

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

  // private:
  //     Ui::
};

#endif  // DRAW_H
