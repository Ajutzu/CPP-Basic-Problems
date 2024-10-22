/* 

Lvl 2: problem that involves multidimensional arrays (2D arrays) to practice your skills:

Problem: Matrix Multiplication
Write a C++ program that multiplies two matrices. The program should read the dimensions of the matrices and their elements, 
then output the resulting matrix after multiplication.


*/

#include <iostream>

using namespace std;

int main() {
    
    int rowsA, colsA, rowsB, colsB;
    
    cout << endl << "Input: " << endl;
    
    cin >> rowsA >> colsA;
    
    int matrixA[rowsA][colsA];
    
    for(int i = 0; i < rowsA; i++) {
        for(int j = 0; j < colsA; j++) {
            cin >> matrixA[i][j];
        }
    }
    
    cin >> rowsB >> colsB;
    
    if (colsA != rowsB) {
        cout << "colsA and rowsB must be equal" << endl;
        return 0;
    }
    
    int matrixB[rowsB][colsB];
    
    for(int a = 0; a < rowsB; a++) {
        for(int b = 0; b < colsB; b++) {
            cin >> matrixB[a][b];
        }   
    }
    
    int matrixC[rowsA][colsB];

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            matrixC[i][j] = 0;
        }
    }
    
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }


    cout <<endl  << "Output: " << endl;

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
           cout << matrixC[i][j] << ' ';
        }
        cout << endl;
    }
    
    
}