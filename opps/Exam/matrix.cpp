//WAP in C++ to find out transpose of a matrix. 
// WAP in C++ to add and multiply two matrix.

#include<iostream>
using namespace std;


void print(int arr[][100] , int r , int c){

       for(int i = 0 ; i < r ; i++) {
        for(int j = 0 ; j < c ; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
}

void transpose(int row, int col, int arr1[][100] , int arr2[][100]) {
    int trans1[100][100];
    int trans2[100][100];
    
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++){
            trans1[j][i] = arr1[i][j]; 
        }
    }

    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++){
            trans2[j][i] = arr2[i][j]; 
        
    }}

    print(trans1 , row , col);
    cout << endl;
    print(trans2 , row , col);

}

void add(int r , int c, int arr1[][100] , int arr2[][100]) {

       int sum[100][100];
       for(int i = 0 ; i < r ; i++) {
        for(int j = 0 ; j < c ; j++){
             sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    print(sum,r,c);

}


void multiply (int r , int c, int arr1[][100] , int arr2[][100]) {
       int mul[100][100];
       for(int i = 0 ; i < r ; i++) {
        for(int j = 0 ; j < c ; j++){
        for(int k = 0 ; k < c ; j++){
            mul[i][j] += arr1[i][k] * arr2[k][j];
          }
        }
    }
    print(mul,r,c);
}

int main() {

    int arr1[100][100];
    int arr2[100][100];
    int row,col;
    cout << "Enter the no. of rows " << endl;
    cin >> row;

    cout << "Enter the no. of  col " << endl;
    cin >> col;

    cout << "Enter the elements of matrix 1" << endl;

    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++){
            cin >> arr1[i][j];
        }
    }

   cout << "Enter the elements of matrix 2" << endl;

    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++){
            cin >> arr2[i][j];
        }
    }

    print(arr1,row,col);
    cout << endl;
    print(arr2,row,col);
    cout << endl;
    transpose(row,col,arr1 , arr2);

    return 0;
}