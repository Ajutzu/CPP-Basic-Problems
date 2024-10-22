/*

Lvl 1: Here's a problem involving arrays to further practice your skills:

Problem: Find the Maximum Element in an Array
Write a C++ program that takes an integer array as input, then finds and prints the maximum element in the array.


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