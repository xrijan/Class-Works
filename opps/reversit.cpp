#include<iostream>
#include<string>
using namespace std;


void reversit(string& s) {
    int n = s.length();
    int temp;
    int i;
    for (int i = 0 ; i<n/2 ;i++) {
        //  swap(s[i],s[n-i-1]);
        temp = s[i]; 
        s[i] = s[n - i - 1];  
        s[n - i - 1] = temp;  
    };

}

int main() {
string text;
cout << "Enter the string to reversse :" << endl;
cin.clear();
getline(cin,text,'\n');
reversit(text);
cout<< text;
}


