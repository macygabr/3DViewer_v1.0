#ifndef SRC_BACK_S21_TRANSFORMATION_H_
#define SRC_BACK_S21_TRANSFORMATION_H_
#include <stdio.h>

typedef struct {
	int count_of_vertexes;
	int count_of_facets;
	double* vertexesArr;
	int* facetsArr;
} dataNur;

int readFile(char* filename, dataNur* outputdata);
int parsVertexes(dataNur* outputdata, int *index, char* buffer);
int parsFacets(dataNur* outputdata, int *index, char* buffer);
double makeNum(char* content, int* i);
int countSize(FILE* fp,int* vertexes, int* facets);

int rotateObj(dataNur* inputdata, int degree, char axis);
int scalingObj(dataNur* inputdata, double scale);
int shiftObj(dataNur* inputdata, int shift, char axis);
#endif