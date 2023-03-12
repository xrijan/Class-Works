// Write a C++ program to define a class employee having members Emp-id, Emp-name, basic salary and functions accept() and display(). 
// Calculate DA=25% of basic salary, HRA=800, I-tax=15% of basic salary. 
//  Display the payslip using appropriate output format. 

#include <iostream>
#include <string>
using namespace std;

class employee {
    public:
    int Emp_id;
    string Emp_name;
    int salary;
    
    void accept() {
        cout << "Enter employee id : ";
        cin >> Emp_id;

        cout << "Enter employee name : ";
        cin >> Emp_name;

        cout << "Enter  salary : ";
        cin >> salary;
    }
    
    void display() {
    
    int hra = 800;
    int da = 0.25 * salary;
    int i_tax = 0.15 * salary;
    int net_salary = (salary+hra+da) - i_tax;
    
      cout << endl;
      cout << "-------------------" << endl;
      cout << "Employee id : " << Emp_id << endl;
      cout << "Emoloyee Name : " << Emp_name << endl;
      cout << "Salary : " << salary << endl;
      cout << "Hra : " << hra << endl;
      cout << "DA : " << da << endl;
      cout << "I-Tax : " << i_tax << endl;
      cout << "Net Salary : " << net_salary << endl;
    }

};

int main() {
    class employee e1;
    e1.accept();
    e1.display();
    return 0;
}