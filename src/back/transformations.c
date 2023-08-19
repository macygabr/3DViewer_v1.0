#include "transformations.h"

#include <math.h>
#include <stdlib.h>
#include <string.h>

// data* transformationsMatrix() {
//   data* dataArr;
//   outputData();
//   return dataArr;
// }

int readFile(char* filename) {
    data outputdata ={0};
    FILE *fp;
    int i = 10000;
    char buffer[i];
    
    filename = "back/tests/cube.obj";//const path
    fp=fopen (filename,"r");
    if(fp == NULL) return 1;

    while((fgets(buffer, i, fp))!=NULL){
        if(buffer[0] == 'v' && buffer[1] == ' ') parsCoordinates(&outputdata,buffer);

    }
    fclose (fp);
    return 0;
}

int parsCoordinates(data* outputdata,char* buffer){
    outputdata=outputdata;
    // outputdata->count_of_vertexes = ;
    printf("%s", buffer);
    return 0;
}
int outputData() { return 0; }

int moveMatrix() { return 0; }
int turnMatrix() { return 0; }
int scalingMatrix() { return 0; }

int mult_matrix() { return 0; }
