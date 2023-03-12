//add two complex number using operator overloading

#include <iostream>
using namespace std;

class Complex {
  private:
  int real;
  int img;
  public:
  Complex() {
    real = img = 0;
  }

  Complex(int r , int i) {
    real = r;
    img = i;
  }

  //overloading + operator 

  Complex operator+(Complex c1) {
     Complex res;
      res.real = real + c1.real;
      res.img = img + c1.img;
      return res;
  }

  void display() {
    cout << real << "+" << img <<"i" << endl;
  }
};
int main() {
    Complex c1(8,-5), c2(2,3);
    Complex result = c1 + c2;
    result.display();

    return 0;
}