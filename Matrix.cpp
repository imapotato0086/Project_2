//
// Created by bobby on 4/5/2021.
//

#include "Matrix.h"

Matrix::Matrix(int rows, int cols)
    : rows(rows), cols(cols)
{// Start Constructor
    this->matrix = new double*[cols];
    for(int i = 0; i < rows; i++)
    {// Start for loop
        this->matrix[i] = new double[cols];
    }// End for loop
}// End Constructor

//TODO : Check for size consistency in Copy Constructor
Matrix::Matrix(const Matrix& Matrix)
    : rows(Matrix.rows), cols(Matrix.cols)
{// Start Copy Constructor

    this->matrix = new double*[cols];
    for(int i = 0; i < rows; i++)
    {// Start for loop
        this->matrix[i] = new double[cols];
    }// End for loop


    for(int i = 0; i < rows; i++)
    {// Start row for loop
        for(int j = 0; j < cols; j++)
        {// Start col for loop
            this->matrix[i][j] = Matrix.matrix[i][j];
        }// End col for loop
    }// End row for loop
}// End Copy Constructor

Matrix::~Matrix()
{// Start Destructor
    for (int i = 0; i < rows; ++i)
    {// Start for loop
        delete[] this->matrix[i];
    }// End for loop
    delete[] this->matrix;
}// End Destructor



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