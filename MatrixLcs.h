//
// Created by alessandro on 02/02/2022.
//

#ifndef ALESSANDROTESTA105380_MATRIXLCS_H
#define ALESSANDROTESTA105380_MATRIXLCS_H

typedef struct Matrix{
    unsigned int rows;
    unsigned int cols;
    int** data;
} matrix;

matrix* allocate(unsigned int n_rows, unsigned int n_cols);

void free_matrix(matrix *m, unsigned int rows);


#endif //ALESSANDROTESTA105380_MATRIXLCS_H

