#ifndef SRC_BACK_S21_TRANSFORMATION_H_
#define SRC_BACK_S21_TRANSFORMATION_H_
#include <stdio.h>

typedef struct {
  double **matrix;
  int rows;
  int columns;
} matrix_t;

typedef struct {
    int i;
} polygon_t;

typedef struct {
	int count_of_vertexes;
	int count_of_facets;
	matrix_t matrix_3d;
	polygon_t *polygons;
} data;

data* transformationsMatrix();
int outputData();
int moveMatrix();
int turnMatrix();
int scalingMatrix();
int readFile(char* filename);
int mult_matrix();
int parsCoordinates(data* outputdata,char* buffer);
#endif