#include <iostream>
#include "Matrix.h"
using namespace std;

const bool SHOW_PROMPTS = true;

void testCreate();
void testCopy();
void testAssignment();
void testAdd();
void testSubtract();
void testAssignAdd();
void testAssignSubtract();
void testMultiply();

int main(void)
{
    int testCase;
    void (*testCases[]) ()
            {
                    testCreate,
                    testCopy,
                    testAssignment,
                    testAdd,
                    testSubtract,
                    testAssignAdd,
                    testAssignSubtract,
                    testMultiply
            };

    cin >> testCase;
    testCases[testCase]();
    return 0;
}

void testCreate()
{
    int rows, cols;
    if(SHOW_PROMPTS) {
        cout << "Enter Matrix A:\n";
        cout << "Number of rows: ";
    }
    cin >> rows;
    if( SHOW_PROMPTS ) {
        cout << "Number of cols: ";
    }
    cin >> cols;

    Matrix a(rows, cols);
    cin >> a;

    cout << "Matrix A\n";
    cout << a;
    cout << "----------------------------------------\n";
}

void testCopy()
{
    int rows, cols;

    if(SHOW_PROMPTS) {
        cout << "Enter Matrix A:\n";
        cout << "Number of rows: ";
    }
    cin >> rows;
    if( SHOW_PROMPTS ) {
        cout << "Number of cols: ";
    }
    cin >> cols;

    Matrix a(rows,cols);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> a;

    cout << "Matrix A\n";
    cout << a;
    cout << "----------------------------------------\n";

    cout << "Copying Matrix A to Matrix B:\n";
    Matrix b(a);

    cout << "Matrix B:\n";
    cout << b;
    cout << "----------------------------------------\n";

}

void testAssignment()
{
    int rows, cols;

    if(SHOW_PROMPTS) {
        cout << "Enter Matrix A:\n";
        cout << "Number of rows: ";
    }
    cin >> rows;
    if( SHOW_PROMPTS ) {
        cout << "Number of cols: ";
    }
    cin >> cols;

    Matrix a(rows,cols);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> a;

    cout << "Matrix A\n";
    cout << a;
    cout << "----------------------------------------\n";

    cout << "Assigning Matrix B to A:\n";
    Matrix b = a;
    cout << "Matrix B:\n";
    cout << b;
    cout << "----------------------------------------\n";

}

void testAdd()
{
    int rowsA, colsA, rowsB, colsB;

    if(SHOW_PROMPTS) {
        cout << "Enter Matrix A:\n";
        cout << "Number of rows: ";
    }
    cin >> rowsA;
    if( SHOW_PROMPTS ) {
        cout << "Number of cols: ";
    }
    cin >> colsA;

    Matrix a(rowsA,colsA);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> a;

    if( SHOW_PROMPTS ){
        cout << "Enter Matrix B:\n";
        cout << "Number of rows: ";
    }
    cin >> rowsB;
    if( SHOW_PROMPTS ){
        cout << "Number of cols: ";
    }
    cin >> colsB;

    Matrix b(rowsB,colsB);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> b;

    cout << "Matrix A\n";
    cout << a;
    cout << "----------------------------------------\n";

    cout << "Matrix B\n";
    cout << b;
    cout << "----------------------------------------\n";

    cout << "Adding A+B no storage\n";
    cout << a+b;
    cout << "----------------------------------------\n";
}

void testSubtract()
{
    int rowsA, colsA, rowsB, colsB;

    if(SHOW_PROMPTS) {
        cout << "Enter Matrix A:\n";
        cout << "Number of rows: ";
    }
    cin >> rowsA;
    if( SHOW_PROMPTS ) {
        cout << "Number of cols: ";
    }
    cin >> colsA;

    Matrix a(rowsA,colsA);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> a;

    if( SHOW_PROMPTS ){
        cout << "Enter Matrix B:\n";
        cout << "Number of rows: ";
    }
    cin >> rowsB;
    if( SHOW_PROMPTS ){
        cout << "Number of cols: ";
    }
    cin >> colsB;

    Matrix b(rowsB,colsB);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> b;

    cout << "Matrix A\n";
    cout << a;
    cout << "----------------------------------------\n";

    cout << "Matrix B\n";
    cout << b;
    cout << "----------------------------------------\n";

    cout << "Subtracting A-B no storage\n";
    cout << a-b;
    cout << "----------------------------------------\n";
}

void testAssignAdd()
{
    int rowsA, colsA, rowsB, colsB;

    if(SHOW_PROMPTS) {
        cout << "Enter Matrix A:\n";
        cout << "Number of rows: ";
    }
    cin >> rowsA;
    if( SHOW_PROMPTS ) {
        cout << "Number of cols: ";
    }
    cin >> colsA;

    Matrix a(rowsA,colsA);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> a;

    if( SHOW_PROMPTS ){
        cout << "Enter Matrix B:\n";
        cout << "Number of rows: ";
    }
    cin >> rowsB;
    if( SHOW_PROMPTS ){
        cout << "Number of cols: ";
    }
    cin >> colsB;

    Matrix b(rowsB,colsB);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> b;

    cout << "Matrix A\n";
    cout << a;
    cout << "----------------------------------------\n";

    cout << "Matrix B\n";
    cout << b;
    cout << "----------------------------------------\n";

    cout << "Performing A+=B\n";
    a += b;
    cout << "Matrix A:\n";
    cout << a;
    cout << "----------------------------------------\n";
}

void testAssignSubtract()
{
    int rowsA, colsA, rowsB, colsB;

    if(SHOW_PROMPTS) {
        cout << "Enter Matrix A:\n";
        cout << "Number of rows: ";
    }
    cin >> rowsA;
    if( SHOW_PROMPTS ) {
        cout << "Number of cols: ";
    }
    cin >> colsA;

    Matrix a(rowsA,colsA);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> a;

    if( SHOW_PROMPTS ){
        cout << "Enter Matrix B:\n";
        cout << "Number of rows: ";
    }
    cin >> rowsB;
    if( SHOW_PROMPTS ){
        cout << "Number of cols: ";
    }
    cin >> colsB;

    Matrix b(rowsB,colsB);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> b;

    cout << "Matrix A\n";
    cout << a;
    cout << "----------------------------------------\n";

    cout << "Matrix B\n";
    cout << b;
    cout << "----------------------------------------\n";

    cout << "Performing A-=B\n";
    a -= b;
    cout << "Matrix A:\n";
    cout << a;
    cout << "----------------------------------------\n";
}

void testMultiply()
{
    int rowsA, colsA, rowsB, colsB;

    if(SHOW_PROMPTS) {
        cout << "Enter Matrix A:\n";
        cout << "Number of rows: ";
    }
    cin >> rowsA;
    if( SHOW_PROMPTS ) {
        cout << "Number of cols: ";
    }
    cin >> colsA;

    Matrix a(rowsA,colsA);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> a;

    if( SHOW_PROMPTS ){
        cout << "Enter Matrix B:\n";
        cout << "Number of rows: ";
    }
    cin >> rowsB;
    if( SHOW_PROMPTS ){
        cout << "Number of cols: ";
    }
    cin >> colsB;

    Matrix b(rowsB,colsB);
    if( SHOW_PROMPTS ){
        cout << "Enter values in row then column order:\n";
    }
    cin >> b;

    cout << "Matrix A\n";
    cout << a;
    cout << "----------------------------------------\n";

    cout << "Matrix B\n";
    cout << b;
    cout << "----------------------------------------\n";

    cout << "Multiplying A*B store in C \n";
    Matrix c = a * b;
    cout << "Matrix C:\n";
    cout << c;
    cout << "----------------------------------------\n";
}
