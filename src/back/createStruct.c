#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "transformations.h"

int readFile(char* filename, dataNur* outputdata) {
  FILE* fp;
  size_t len = 0;
  int vertexes = 0;
  int facets = 0;
  int vertexesNum = 0;
  int facetsNum = -1;
  char* buffer = NULL;
  outputdata->count_of_vertexes = 0;
  outputdata->count_of_facets = 0;
  fp = fopen(filename, "r");
 /**< Общее число точек */
  if (fp != NULL) {
    countSize(fp, &vertexes, &facets);
    outputdata->vertexesArr = (double*)calloc(vertexes, sizeof(double));
    outputdata->facetsArr = (int*)calloc(facets * 2, sizeof(int));

    while (getline(&buffer, &len, fp) != -1) {
      if (buffer[0] == 'v' && buffer[1] == ' ')
        parsVertexes(outputdata, &vertexesNum, buffer);
      if (buffer[0] == 'f' && buffer[1] == ' ')
        parsFacets(outputdata, &facetsNum, buffer);
    }
  }

  free(buffer);
  fclose(fp);
  return fp == NULL ? 1 : 0;
}

int parsVertexes(dataNur* outputdata, int* vertexesNum, char* buffer) {
  for (int i = 1; buffer[i] != '\n' && buffer[i] != '\0'; i++)
    if (buffer[i] != ' ')
      outputdata->vertexesArr[(*vertexesNum)++] = makeNum(buffer, &i);
  outputdata->count_of_vertexes++;
  return 0;
}

int parsFacets(dataNur* outputdata, int* facetsNum, char* buffer) {
  int first = 0;
  int block = 0;
  for (int i = 1; buffer[i] != '\n' && buffer[i] != '\0'; i++) {
    if (buffer[i - 1] == ' ') {
      outputdata->facetsArr[++(*facetsNum)] = (int)(buffer[i] - '0');
      if (first) outputdata->facetsArr[++(*facetsNum)] = (int)(buffer[i] - '0');
      if (!first) first = (int)(buffer[i] - '0');
    }
  }

  outputdata->facetsArr[++(*facetsNum)] = first;
  outputdata->count_of_facets++;
  return 0;
}

double makeNum(char* content, int* i) {
  double res = 0.0;
  int j = 0;
  int flag = 0;
  int dot = 0;
  int minus = 0;

  for (; content[(*i)] != ' ' && content[(*i)] != '\0' && content[(*i)] != '\n';
       (*i)++) {
    if (content[(*i)] == '.') {
      flag = j;
      dot++;
    }
    if (content[(*i)] >= '0' && content[(*i)] <= '9') {
      j++;
      res += (double)(content[(*i)] - '0') / ((int)pow(10, j));
    }
    if (content[(*i)] == '-') {
      minus = 1;
    }
  }
  if (!flag) flag = j;
  res *= pow(10, (flag));
  if (minus) res *= -1;
  return res;
}

int countSize(FILE* fp, int* vertexes, int* facets) {
  char* line = NULL;
  size_t len = 0;
  while (getline(&line, &len, fp) != -1) {
    if (line[0] == 'v' && line[1] == ' ')
      for (int i = 1; i < strlen(line); i++)
        if (line[i] == ' ') (*vertexes)++;

    if (line[0] == 'f' && line[1] == ' ')
      for (int i = 1; i < strlen(line); i++)
        if (line[i] == ' ') (*facets)++;
  }
  rewind(fp);
  free(line);
  return 0;
}