#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "../transformations.h"

int main() {
  dataNur outputdata;
  char *filename =
      "back/tests/cube.obj";
  readFile(filename, &outputdata);
  scalingObj(&outputdata, 1);
  rotateObj(&outputdata,26.0,'y');

  for (int index = 0, j = 1; index < outputdata.count_of_vertexes;
       index++, j++) {
    printf("%f ", outputdata.vertexesArr[index]);
    if (j == 3) {
      printf("\n");
      j = 0;
    }
  }
  printf(
      "polygon:__________________________________________________________\n");
  for (int index = 0, j = 1; index < outputdata.count_of_facets; index++, j++) {
    printf("%d", outputdata.facetsArr[index]);
    if (!(j % 2)) printf(" ");
    if (j == 6) {
      printf("\n");
      j = 0;
    }
  }

  printf("вершины = %d\nполигоны = %d", outputdata.count_of_vertexes,
         outputdata.count_of_facets);
  free(outputdata.vertexesArr);
  free(outputdata.facetsArr);
  return 0;
}