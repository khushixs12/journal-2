#include <iostream>
using namespace std;

class class_2; 

class class_1 {
    int value1;
public:
    void data(int a) {
        value1 = a; 
    }
    
    void display() {
        cout << "value 1: " << value1 << "\n"; 
    }

    friend void exchange(class_1&, class_2&);
};

class class_2 {
    int value2;
public:
    void data(int a) {
        value2 = a; 
    }
    
    void display() {
        cout << "value 2: " << value2 << "\n"; 
    }

    friend void exchange(class_1&, class_2&); 
};


void exchange(class_1& x, class_2& y);

void exchange(class_1& x, class_2& y) {
    int temp = x.value1; 
    x.value1 = y.value2; 
    y.value2 = temp; 
}

int main() { 
    class_1 c1;
    class_2 c2;

    c1.data(100);
    c2.data(200);

    cout << "Values before exchanging:\n";
    c1.display();
    c2.display();

    exchange(c1, c2); 

    cout << "Values after exchanging:\n";
    c1.display();
    c2.display();

    return 0; 
}

