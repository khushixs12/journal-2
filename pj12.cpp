#include <iostream>
using namespace std;

class A;  
class B;  
class C;  

class C {
private:
    int c;
public:
    C() {
        cout << "Enter c: ";
        cin >> c;
    }
    int get_value() const {  
        return c;
    }
    friend void average(A, B, C);
};

class A {
private:
    int a;
public:
    A() {
        cout << "Enter a: ";
        cin >> a;
    }
    int get_value() const {  
        return a;
    }
    friend void average(A, B, C);
};

class B {
private:
    int b;
public:
    B() {
        cout << "Enter b: ";
        cin >> b;
    }
    int get_value() const {  
        return b;
    }
    friend void average(A, B, C);
};

void average(A x, B y, C z) {
    float avg;
    avg = (x.get_value() + y.get_value() + z.get_value()) / 3.0;  
    cout << "Average = " << avg << endl;
}

int main() {
    A a;  
    B b;  
    C c;  
    average(a, b, c);  
    return 0;
}

