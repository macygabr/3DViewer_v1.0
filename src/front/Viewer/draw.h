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
void displayLines() ;
  dataNur test;
  char *file_name;
  int lastState;

  int numV =0;
  int numL=0;

  int sizeH = 0;
  int sizeW = 0;

  // Nurlan use next:
  int  zoom = 0; // отношение текущего состояния масштаба к предыдущему
  int firstOpen = 0; // было ли это открыте файла в первый раз
  int projection = 0; // включена ли центральная проекция
  int lastValueZ = 0; //предыдущее значение координаты по z
  int error = 1; // наличие ошибок, изначально, до открытия файла считаем что есть
  // dont touch

  double translation[3];
  double rotation[3];
  double scale;

  int typeVertices;
  int typeLines;

  int sizeVertices;
  int sizeLines;

  double maxSizeAxis;

  QColor colorVertices;
  QColor colorLines;
  QColor colorBackground;

private:
//      dataNur test;
//    Ui::
};

#endif  // DRAW_H
