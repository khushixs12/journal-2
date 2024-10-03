#include <iostream>
#include <cstring>  
using namespace std;

class MyString {  
private:
    char *name;

public:
    MyString() {
        name = new char[10];
        strcpy(name, "I Like ");
    }

    
    MyString(const char *a) {
        name = new char[strlen(a) + 1]; 
        strcpy(name, a);
    }

    
    MyString(const MyString &obj) {
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
    }

    
    ~MyString() {
        delete[] name;
    }


    void disp() const {
        cout << name;
    }
};

int main() {
    MyString ob1, ob2("C++ "), ob3 = ob2;  
    ob1.disp();
    ob2.disp();
    ob3.disp();
    return 0;
}

