#include<iostream>
using namespace std;

int main() {
   int a ,b;
   int result;
   char op;
   cout<<"Enter the value of a :" << endl;
   cin >> a;

   cout << "Enter the operator : " << endl;
   cin >> op;

   cout<<"Enter the value of b :" << endl;
   cin >> b;

   switch (op)
   {
   case '+':
    result = a+b;
    break;
       case '-':
    result = a-b;
    break;
       case '/':
    result = a/b;
    break;
       case '*':
    result = a*b;
    break;
   default:
   cout<< "Invalid Operator" << endl ;
   result = 0;
   }

   cout<< result << endl;

}