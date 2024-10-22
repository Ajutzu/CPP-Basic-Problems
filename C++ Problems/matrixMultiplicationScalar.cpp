/* 

Lvl 2: Problem involving multidimensional arrays (2D arrays) to further practice your skills:

Problem: Matrix Multiplication with Scalar Input
Description: Write a C++ program that multiplies two matrices, but this time, the matrix elements are scaled by a
scalar value before the multiplication. The program should read the dimensions of the matrices, the scalar value, 
and the matrix elements, and then output the resulting matrix after multiplication.

*/

#include <iostream>

using namespace std;

int main() {
    int colA, rowA, colB, rowB, scalar;

    cin >> scalar;

    cin >> rowA >> colA;

    int matrixA[rowA][colA];

    for(int i = 0; i < rowA; i++) {
        for(int j = 0; j < colA; j++) {
            cin >> matrixA[i][j];
            matrixA[i][j] *= scalar;
        }
    }


    cin >> rowB >> colB;

    int matrixB[rowB][colB];

    for(int i = 0; i < rowB; i++) {
        for(int j = 0; j < colB; j++) {
            cin >> matrixB[i][j];
            matrixB[i][j] *= scalar;
        }
    }

    int matrixC[rowA][colB] = {0};

    for(int i =0; i < rowA ; i++) {
        for(int j=0; j< colB; j++) {
            for(int k=0; k < colA; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    } 

    cout << endl << "Output: " << endl;

    for(int i = 0; i < rowA; i++) {
        for(int j = 0; j < colB; j++) {
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }



}