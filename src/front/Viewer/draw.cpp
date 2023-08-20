#include "draw.h"

draw::draw(QWidget *parent) : QOpenGLWidget(parent)
{

}

void draw::initializeGL(){
    glClearColor(0,0,1,0);
}
void draw ::resizeGL(int w, int h){}
void draw::painGL(){}
