#include <iostream>
using namespace std;

class Shape {
    protected:
    int length;
    int breadth;

    public:
    void get() {
        cin >> length;
        cin >> breadth;
    }
    virtual int area() = 0;

};

class rectange : public Shape {
    public:
    int area() {
        return length * breadth;
    }
};

class triangle : public Shape {
    public:
    int area() {
        return  0.5 * length * breadth;
    }
};

int main() {
    rectange r;
    triangle t;
    r.get();
    cout << r.area() << endl;
    t.get();
    cout << t.area() << endl;
    return 0;
}