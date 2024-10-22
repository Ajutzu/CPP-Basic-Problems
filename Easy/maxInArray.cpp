/*

Lvl 1: Here's a problem involving arrays to further practice your skills:

Problem: Find the Maximum Element in an Array
Write a C++ program that takes an integer array as input, then finds and prints the maximum element in the array.

Input:
The first line contains an integer n (1 ≤ n ≤ 100), which represents the number of elements in the array.
The second line contains n integers separated by spaces, representing the elements of the array.

Output:
A single integer: the maximum element in the array.

*/


#include <iostream>
#include <climits>

using namespace std;

int main() {
    int numberOfElements;
    int maxNum = INT_MIN;
    
    cout << endl << "Input: " << endl;
    cin >> numberOfElements;
    
    int arrayOfNumber[numberOfElements];
        
    for(int i = 0; i < numberOfElements; i++) {
        cin >> arrayOfNumber[i];
        if (arrayOfNumber[i] > maxNum) {
            maxNum = arrayOfNumber[i];
        }
    }
    
    
    cout << endl << "Output: " << endl;
    cout << maxNum;
}