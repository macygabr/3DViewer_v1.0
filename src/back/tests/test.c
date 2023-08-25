#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "../transformations.h"

int main() {
  dataNur outputdata;
  int error =0;
  char *filename = "back/tests/cube.obj";
  error = readFile(filename, &outputdata);
  scalingObj(&outputdata, 10);
  rotateObj(&outputdata, 90, 'y');

  for (int index = 0, j = 1; index < outputdata.count_of_vertexes;
       index++, j++) {
    printf("%f ", outputdata.vertexesArr[index]);
    if (j == 3) {
      printf("\n");
      j = 0;
    }
  }
  printf("polygon:_____________________________________________\n");
  for (int index = 0, j = 1; index < outputdata.count_of_facets; index++, j++) {
    printf("%d", outputdata.facetsArr[index]);
    if (!(j % 2)) printf(" ");
    if (j == 6) {
      printf("\n");
      j = 0;
    }
  }

  printf("вершины = %d\nполигоны = %d\nошибок: %d", outputdata.count_of_vertexes,
         outputdata.count_of_facets, error);
  free(outputdata.vertexesArr);
  free(outputdata.facetsArr);
  return 0;
}