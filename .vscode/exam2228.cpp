#include<iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    
    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    
    int majorDiagonalSum = 0;
    int minordiagonalsum =0;

    
    for(int i = 0; i < n; ++i) {
-       majorDiagonalSum = matrix[i][i];          
         
    }

    cout << "Major diagonal elements: ";
    for(int i = 0; i < n; ++i) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;



    

    
    cout << "Sum of major diagonal: " << majorDiagonalSum << endl;
    

    return 0;
}
