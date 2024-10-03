#include <iostream>
using namespace std;

class B;  

class A {
    int a;
public:
    A() {
        cout << "Enter a: ";
        cin >> a;
    }
    int get_value() const {  
        return a;
    }
    friend void maximum(A, B);
};

class B {
    int b;
public:
    B() {
        cout << "Enter b: ";
        cin >> b;
    }
    int get_value() const {  
        return b;
    }
    friend void maximum(A, B);
};

void maximum(A m, B n) {
    if (m.get_value() >= n.get_value())  
        cout << "Max = " << m.get_value() << endl;
    else
        cout << "Max = " << n.get_value() << endl;  
}

int main() {
    A a;
    B b;
    maximum(a, b);
    return 0;
}

