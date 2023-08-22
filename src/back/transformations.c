#include "transformations.h"

#include <math.h>
#include <stdlib.h>
#include <string.h>

int readFile(char* filename) {
    data outputdata;
    FILE *fp;
    size_t len = 0;
    int vertexes =0;
    int facets =0;
    int vertexesNum =0;
    int facetsNum =0;
    char buffer[1000];
    outputdata.count_of_vertexes =0;
    outputdata.count_of_facets =0;
    filename = "back/tests/cube.obj";
    fp=fopen(filename,"r");
    if(fp == NULL) return 1; // ???????????????????????????
    countSize(fp,&vertexes ,&facets);
    outputdata.vertexesArr = (double *)calloc(vertexes, sizeof(double)); 
    outputdata.facetsArr = (int *)calloc(facets, sizeof(int)); 

    while(fgets(buffer,sizeof(buffer),fp)!= NULL){
        if(buffer[0] == 'v' && buffer[1] == ' ') parsVertexes(&outputdata,&facetsNum,buffer);
        // if(buffer[0] == 'f' && buffer[1] == ' ') parsFacets(&outputdata,&facetsNum,buffer);
    }
    // printf("[%d]", facetsNum);
    
    for(int index=0, j=1; index<24; index++, j++){
        printf("%f ", outputdata.vertexesArr[index]);
        if(j==3){
            printf("\n");
            j=0;
        } 
    }
    // for(int index=0, j=1; index<facetsNum; index++, j++){
    //     printf("%d ", outputdata.facetsArr[index]);
    //     if(j==3){
    //         printf("\n");
    //         j=0;
    //     } 
    // }

    fclose (fp);
    // free(buffer);
    return 0;
}

int parsVertexes(data* outputdata, int* vertexesNum, char* buffer){

    for(int i=0; buffer[i] != '\n' &&  buffer[i] != '\0'; i++){
       outputdata->vertexesArr[(*vertexesNum)++] = makeNum(buffer, &i);
    }
    outputdata->count_of_vertexes++;
    return 0;
}

int parsFacets(data* outputdata, int *facetsNum, char* buffer){
    for(int i=2, j=0; buffer[i] != '\n' &&  buffer[i] != '\0'; i++, j++){
        if(buffer[i-1] == ' ') outputdata->facetsArr[(*facetsNum)++] = (int)(buffer[i]-'0');
    }
    outputdata->count_of_facets++;
    return 0;   
}

double makeNum(char* content, int* i) {
  double res = 0.0;
  int j = 0;
  int flag = 0;
  int dot = 0;
  int minus=0;

    for (; content[(*i)] != ' ' && content[(*i)] != '\0' && content[(*i)] != '\n'; (*i)++) {
      if (content[(*i)] == '.') {
        flag = j;
        dot++;
      } 
       if(content[(*i)]>='0' && content[(*i)]<='9'){
        j++;
        res += (double)(content[(*i)] - '0') / ((int)pow(10, j));
      }
      if (content[(*i)] == '-') {
        minus =1;
      }
    }
    if (!flag) flag = j;
    res *= pow(10, (flag));
    if(minus) res*=-1;
  return res;
}

int countSize(FILE* fp,int* vertexes, int* facets){
    char *line = NULL;
    size_t len = 0;
    while(getline(&line, &len, fp) != -1){
         if(line[0] == 'v' && line[1] == ' ') (*vertexes)++;
         if(line[0] == 'f' && line[1] == ' ') (*facets)++;
    }
    rewind(fp);
    free(line);
    return 0;
}