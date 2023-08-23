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
	double* vertexesArr;
	int* facetsArr;
} dataNur;

dataNur* transformationsMatrix();
int outputData();
int moveMatrix();
int turnMatrix();
int scalingMatrix();
int readFile(char* filename, dataNur* outputdata);
int mult_matrix();
int parsVertexes(dataNur* outputdata, int *index, char* buffer);
int parsFacets(dataNur* outputdata, int *index, char* buffer);
double makeNum(char* content, int* i);
int create_matrix(int rows, int columns, matrix_t *result);
int countSize(FILE* fp,int* vertexes, int* facets);
#endif