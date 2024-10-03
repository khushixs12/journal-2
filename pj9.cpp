#include <iostream>
#include <conio.h>
using namespace std;

class no {
private:
    int num;

public:
    no() {
        num = 0;
    }

    void inputno() {
        cout << "Enter an integer: ";
        cin >> num;
    }

    void display() {
        cout << "num: " << num << endl; 
    }
};

int main() { 
    no n1;
    n1.inputno(); 
    n1.display();

    no* ptrn1; 
    ptrn1 = new no; 

    cout << "Default value: " << endl; 
    ptrn1->inputno(); 
    ptrn1->display(); 

    
    delete ptrn1;

    getch(); 
    return 0; 
}

