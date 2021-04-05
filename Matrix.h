//
// Created by bobby on 4/5/2021.
//

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix
{

    /**
     *
     * @param out
     * @param Matrix
     * @return
     */
    friend std::ostream& operator<<(std::ostream& out, const Matrix& Matrix);
    /**
     *
     * @param cin
     * @param Matrix
     * @return
     */
    friend std::istream& operator>>(std::istream& cin, Matrix& Matrix);


public:

    /**
     * Constructor
     * @param rows - number of rows in matrix
     * @param cols - number of cols in matrix
     */
    Matrix(int rows, int cols);
    /**
     *
     * @param original - matrix to copy from
     */
    Matrix(Matrix& original);

    /**
     *
     * @param Matrix - matrix to equal from
     */
    void operator=(const Matrix& Matrix);

    /**
     *
     * @param Matrix - matrix to add from
     * @return
     */
    Matrix operator+(const Matrix& Matrix);
    /**
     *
     * @param Matrix - matrix to subtract from
     * @return
     */
    Matrix operator-(const Matrix& Matrix);
    /**
     *
     * @param Matrix
     */
    void operator+=(const Matrix& Matrix);
    /**
     *
     * @param Matrix
     */
    void operator-=(const Matrix& Matrix);
    /**
     *
     * @param Matrix - Matrix to multiply with
     * @return
     */
    Matrix operator*(const Matrix& Matrix);



private:

    const int rows;
    const int cols;
    double** matrix;
};



#endif //PROJECT_2_MATRIX_H
