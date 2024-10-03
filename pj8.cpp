#include <iostream>
#include <conio.h>
using namespace std;

class employee {
public:
    int id;
    string name;
    float salary;

    employee(int id, string name, float salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() { 
    employee e1(687848, "mohini", 97000); 
    employee e2(819871, "mahin", 97000); 

    e1.display();
    e2.display();

    getch(); 
   return 0; 
}

