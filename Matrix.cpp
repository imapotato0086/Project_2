//
// Created by bobby on 4/5/2021.
//

#include "Matrix.h"

Matrix::Matrix(int rows, int cols)
    : rows(rows), cols(cols){ }

//TODO : Check for size consistancy in Copy Constructor
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





std::ostream& operator<<(std::ostream& out, const Matrix& Matrix)
{// Start << Overloader
    return out;
}// End << Overloader

std::istream& operator>>(std::istream& cin, Matrix& Matrix)
{// Start >> Overloader
    return cin;
}// End >> Overloader


void Matrix::operator=(const Matrix& Matrix)
{// Start = Overloader

}// End = Overloader


Matrix Matrix::operator+(const Matrix& Matrix)
{// Start + Overloader
    return Matrix;
}// End + Overloader

Matrix Matrix::operator-(const Matrix& Matrix)
{// Start - Overloader
    return Matrix;
}// End - Overlaoder

void Matrix::operator+=(const Matrix& Matrix)
{// Start += Overloader

}// End += Overloader

void Matrix::operator-=(const Matrix& Matrix)
{// Start -= Overloader

}// End -= Overloader

Matrix Matrix::operator*(const Matrix& Matrix)
{// Start * Overloader
    return Matrix;
}// End * Overloader