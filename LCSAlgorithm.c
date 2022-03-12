//
// Created by alessandro on 09/03/2022.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "LCSAlgorithm.h"

char* printLcs(char *stringFile1, char *stringFile2){
    unsigned int m=strlen(stringFile1), n=strlen(stringFile2);
    struct Matrix *matrix = allocate(m+1,n+1);
    unsigned int nRows = matrix->rows, nCols = matrix->cols;
    for(int i=0;i<=nRows - 1;i++)
        matrix->data[i][0]=0;
    for(int j=0;j<=nCols - 1;j++)
        matrix->data[0][j]=0;
    for(int i=1;i<=nRows - 1;i++){
        for(int j=1;j<=nCols - 1;j++)
        {
            if(stringFile1[i-1] == stringFile2[j-1])
                matrix->data[i][j]= matrix->data[i-1][j-1]+1;
            else if(matrix->data[i-1][j] >= matrix->data[i][j-1])
                matrix->data[i][j]= matrix->data[i-1][j];
            else
                matrix->data[i][j]= matrix->data[i][j-1];
        }
    }
    return lcs(matrix, matrix->data[m][n], stringFile1, stringFile2);
}

char* lcs(matrix *matrix, int length, char* stringFile1, char* stringFile2){
    int lcsLength = length;
    char* lcsOutput = (char* ) calloc(lcsLength + 1, sizeof(char));
    lcsOutput[lcsLength] = '\0';
    unsigned int i = strlen(stringFile1), j = strlen(stringFile2);
    while (i > 0 && j > 0) {
        if (stringFile1[i - 1] == stringFile2[j - 1]) {
            lcsOutput[lcsLength - 1] = stringFile1[i - 1];
            i--;
            j--;
            lcsLength--;
        }
        else if (matrix->data[i - 1][j] > matrix->data[i][j - 1])
            i--;
        else
            j--;
    }
    free_matrix(matrix, matrix->rows);
    return lcsOutput;
}
