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
  void displayLines();

  dataNur test;
  char *file_name;

  // Nurlan use next:
  int zoom = 0;  // отношение текущего состояния масштаба к предыдущему
  int firstOpen = 0;  // было ли это открыте файла в первый раз
  int projection = 0;  // включена ли центральная проекция
  int lastValueZ = 0;  // предыдущее значение координаты по z
  int error =
      1;  // наличие ошибок, изначально, до открытия файла считаем что есть
  // dont touch

  double translation[3] = {0, 0, 0};
  int rotation[3] = {0, 0, 0};

  double scale = 100.0;

  int typeVertices = 0;
  int typeLines = 1;

  int sizeVertices = 10;
  int sizeLines = 1;

  QColor colorVertices;
  QColor colorLines;
  QColor colorBackground;

 private:
};

#endif  // DRAW_H
