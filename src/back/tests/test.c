#include "../transformations.h"
#include <math.h>
#include <string.h>

int main(){
    dataNur outputdata;
    char *filename = "back/tests/cube.obj";
    readFile(filename,&outputdata);
    
    for(int index=0, j=1; index<outputdata.count_of_vertexes*3; index++, j++){
        printf("%f ", outputdata.vertexesArr[index]);
        if(j==3){
            printf("\n");
            j=0;
        }
    }

    for(int index=0, j=1; index<outputdata.count_of_facets*3; index++, j++){
        printf("%d", outputdata.facetsArr[index]);
        if(!(j%2)) printf(" ");
        if(j==6){
            printf("\n");
            j=0;
        }
    }
    return 0;
}