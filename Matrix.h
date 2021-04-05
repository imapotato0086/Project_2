//
// Created by bobby on 4/5/2021.
//

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix
{

    friend std::ostream& operator<<(std::ostream& out, Matrix& Matrix);
    friend std::ostream& operator>>(std::ostream& cin, Matrix& Matrix);


public:

    Matrix operator=(const Matrix& Matrix);
    Matrix operator+(const Matrix& Matrix);


    Matrix operator-(const Matrix& Matrix);
    Matrix operator+=(const Matrix& Matrix);
    Matrix operator-=(const Matrix& Matrix);
    Matrix operator*(const Matrix& Matrix);



private:

    const int rows;
    const int cols;
    double** matrix;
};



#endif //PROJECT_2_MATRIX_H
