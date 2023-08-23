#include "draw.h"
#include <QOpenGLFunctions>

draw::draw(QWidget *parent) : QOpenGLWidget(parent)
{
      rotation[0] = 0.0;
      rotation[1] = 0.0;
      rotation[2] = 0.0;

      translation[0] = 0.0;
      translation[1] = 0.0;
      translation[2] = 0.0;

      scale = 1.0;

      typeVertices = 1;
      typeLines = 1;

      sizeVertices = 10.0;
      sizeLines = 1.0;

      projection = 0;

      maxSizeAxis = 1;

      colorVertices.setRedF(1.0f);
      colorVertices.setGreenF(0.0f);
      colorVertices.setBlueF(1.0f);

      colorLines.setRedF(1.0f);
      colorLines.setGreenF(1.0f);
      colorLines.setBlueF(1.0f);

      colorBackground.setRedF(0.0f);
      colorBackground.setGreenF(0.0f);
      colorBackground.setBlueF(0.0f);

}

draw::~draw() { /*freeData(&model);*/ }

void draw::initializeGL(){
//      initializeOpenGLFunctions();

//    glShadeModel(GL_FLAT);
//    glEnable(GL_CULL_FACE);
    glClearColor(colorBackground.redF(), colorBackground.greenF(), colorBackground.blueF(), 1.0f);
//      glEnable(GL_DEPTH);


//      initializeOpenGLFunctions();
      glEnable(GL_DEPTH);
//      glShadeModel(GL_FLAT);
//      glEnable(GL_CULL_FACE);
//    glClearColor(0,0,1,0);
}
void draw ::resizeGL(int w, int h){

//    glMatrixMode(GL_PROJECTION);
//        glLoadIdentity();
//        glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
//        glViewport(0, 0, (GLint)w, (GLint)h);

}
void draw::paintGL(){


    glClearColor(colorBackground.redF(), colorBackground.greenF(), colorBackground.blueF(), 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);
    dataNur test;
    readFile(file_name, &test);
    glEnableClientState(GL_VERTEX_ARRAY);
     glVertexPointer(3, GL_DOUBLE, 0, test.vertexesArr);
       glDrawElements(GL_LINES, test.count_of_facets*2, GL_UNSIGNED_INT,
                      test.facetsArr);
//    displayVertices();

//displayVertices();
}

void draw::displayVertices() {
//    GLdouble vertices[12];
//    vertices[0]=0.0;
//    vertices[1]=0;
//    vertices[2]=0;
//    vertices[3]=0;
//    vertices[4]=0;
//    vertices[5]=1;
//    vertices[6]=1;
//    vertices[7]=0;
//    vertices[8]=0;
//    vertices[9]=0;
//    vertices[10]=1;
//    vertices[11]=0;

//GLint lines[12];
//lines[0]=0;
//lines[1]=1;
//lines[2]=0;
//lines[3]=2;
//lines[4]=0;
//lines[5]=3;
//lines[6]=1;
//lines[7]=2;
//lines[8]=2;
//lines[9]=3;
//lines[10]=3;
//lines[11]=1;

    glEnableClientState(GL_VERTEX_ARRAY);
     glVertexPointer(3, GL_DOUBLE, 0, test.vertexesArr);
       glDrawElements(GL_LINES, test.count_of_facets*2, GL_UNSIGNED_INT,
                      test.facetsArr);
}
