#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "../transformations.h"

int main() {
  dataNur outputdata;
  char *filename =
      "/Users/macygabr/Project/C8_3DViewer_v1.0-1/src/back/tests/cube.obj";
  readFile(filename, &outputdata);
  scalingObj(&outputdata, 0.1);

  for (int index = 0, j = 1; index < outputdata.count_of_vertexes * 3;
       index++, j++) {
    printf("%f ", outputdata.vertexesArr[index]);
    if (j == 3) {
      printf("\n");
      j = 0;
    }
  }

  for (int index = 0, j = 1; index < outputdata.count_of_facets * 6;
       index++, j++) {
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