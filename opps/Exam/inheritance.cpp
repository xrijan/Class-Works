//Write a C++ program to implement single inheritance using employee 1 as base class and employee 2 as derived class.
// Calculate and display the gross salary for both the employee class object, considering sales percentage for employee 2 class object. 
#include <iostream>
using namespace std;

class employee1 {
    public:
    int id;
    char name[10];
    int salary;

    void input() {
        cout << "Enter the data : ";
        cin >> id;
        cin >> name;
        cin >> salary;
    }
};

class employee2 : public employee1 {
    public :
    int gross_salary;
    int sp;

    void calculate() {
        gross_salary = salary*0.23 + salary;
    }

    void dispaly() {
        cout << "Employee id :" << endl;
        cout << id;
        cout << "Employee name :" << endl;
        cout << name;
        cout << "Employee gross_salary :" << endl;
        cout << gross_salary;
    }
};

int main() {
    class employee2 e;
    e.input();
    e.calculate();
    e.dispaly();
    return 0;
}