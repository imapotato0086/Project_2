//
// Created by bobby on 4/5/2021.
//

#include "Matrix.h"

Matrix::Matrix(int rows, int cols)
    : rows(rows), cols(cols){ }


Matrix::Matrix(const Matrix& Matrix)
    : rows(Matrix.rows), cols(Matrix.cols)
{// Start Copy Constructor
    for(int i = 0; i < rows; i++)
    {// Start row for loop
        for(int j = 0; j < cols; j++)
        {// Start col for loop
            this->matrix[i][j] = Matrix.matrix[i][j];
        }// End col for loop
    }// End row for loop
}// End Copy Constructor

