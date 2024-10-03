#include <iostream>
#include <cstring> 
using namespace std;

class Employee {
public:
    int id, salary, hours, days;
    char name[50];

    
    virtual void compute_pay() {
        
    }

    void display() {
        cout << "About " << name << "...\n";
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

class Male : public Employee {
public:
    void setdata() {
        cout << "Male Employee ID: ";
        cin >> id;
        cout << "Male Employee Name: ";
        cin >> name;
        cout << "How many Days to work: ";
        cin >> days;
        cout << "How many Hours to work: ";
        cin >> hours;
        compute_pay();
    }

    void compute_pay() override {
        salary = (hours * days) * 100;
    }
};

class Female : public Employee {
public:
    void setdata() {
        cout << "\n\nFemale Employee ID: ";
        cin >> id;
        cout << "Female Employee Name: ";
        cin >> name;
        cout << "How many Days to work: ";
        cin >> days;
        cout << "How many Hours to work: ";
        cin >> hours;
        compute_pay();
    }

    void compute_pay() override {
        salary = (hours * days) * 40; 
    }
};

int main() {
    Male obj1;
    Female obj2;

    obj1.setdata();
    obj1.display();

    obj2.setdata();
    obj2.display();

    return 0;
}

