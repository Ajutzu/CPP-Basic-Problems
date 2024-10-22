/* 

Lvl 2: problem that involves multidimensional arrays (2D arrays) to practice your skills:

Problem: Matrix Multiplication
Write a C++ program that multiplies two matrices. The program should read the dimensions of the matrices and their elements, 
then output the resulting matrix after multiplication.

Input:
The first line contains two integers, rowsA and colsA, representing the number of rows and columns of the first matrix (A).
The next rowsA lines contain colsA integers each, representing the elements of matrix A.
The following line contains two integers, rowsB and colsB, representing the number of rows and columns of the second matrix (B).
The next rowsB lines contain colsB integers each, representing the elements of matrix B.

Constraints:
The number of columns of matrix A must be equal to the number of rows of matrix B (i.e., colsA must equal rowsB).

Output:
The resulting matrix (C) after multiplying matrix A and matrix B. The dimensions of matrix C will be rowsA x colsB.

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