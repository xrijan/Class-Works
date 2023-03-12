//WAP in C++ to take input from user and store them in array. 
//Display sum and average of array elements .
// Display largest and smallest elements in the array along with the index number.

#include <iostream>
using namespace std;

int sum(int a[ ],int n ) {
    int sum = 0;

    for(int i = 0 ; i < n ; i++){
        sum = sum+a[i];
    }
    return sum;
}

int avg(int sum , int len) {
    return sum/len;
}

void operation(int a[],int n ) {
    int la = 0;
    int sm = 0;
     for(int i = 0 ; i < n ; i++){
     for(int j = i+1 ; j < n ; j++){
        if(a[i] > a[j]) {
            la = a[i];
        }else{
            sm = a[j];
        }
     }
    }

    cout << "Largest element in the array is " << la << endl;
    cout << "Smallest element in the array is " << sm << endl;
    
}

int main(){
    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;
    int arr[size];
    
    cout << "Enter the elements of the array :" << endl;
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
        cout << "Element " << arr[i] << " stored in index " << i << endl;
    }

    int total ;
    total = sum(arr,size);
    cout << "The sum elements of array :" << total << endl;

    int average;
    average = avg(total,size);
    cout << "The average elements of array :" << average << endl;

    operation(arr,size);
    return 0;
}