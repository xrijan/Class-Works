//Fibonacci using constructor?
#include <iostream>

using namespace std;


class fibo {


    int num1 = 0;
    int num2 = 1;
    int num_next = 1;

    public:
          fibo() {
                    int n;
                    cin >> n;
                    if (n>=1)
                        cout << 0 << " ";
                    if (n>=2)
                        cout << 1 << " ";
                    for (int i = 0; i < n-2; i++){
                        num_next = num1 + num2;
                        cout << num_next << " ";
                        num1 = num2;
                        num2 = num_next;
                    }
          }
};

int main()
{
    fibo f1;
    return 0;
}

