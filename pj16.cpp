#include <iostream>
#include <cstring>  
using namespace std;

class Employee {
public:
    int id;
    int salary;
    int hours;
    int days;
    char name[50];  
};

class Male : public Employee {
public:
    void setData() {
        cout << "Male Employee ID: ";
        cin >> id;
        cout << "Male Employee Name: ";
        cin.ignore(); 
        cin.getline(name, 50);
        cout << "How many Days to work: ";
        cin >> days;
        cout << "How many Hours to work: ";
        cin >> hours;
    }

    void computePay() {
        salary = (hours * days) * 100;
    }

    void display() {
        cout << "About " << name << ":\n";
        cout << "Employee ID: " << id << "\n";
        cout << "Employee Name: " << name << "\n";
        cout << "Employee Salary: " << salary << "\n";
    }
};

class Female : public Employee {
public:
    void setData() {
        cout << "\n\nFemale Employee ID: ";
        cin >> id;
        cout << "Female Employee Name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "How many Days to work: ";
        cin >> days;
        cout << "How many Hours to work: ";
        cin >> hours;
    }

    void computePay() {
        salary = (hours * days) * 40;
    }

    void display() {
        cout << "About " << name << ":\n";
        cout << "Employee ID: " << id << "\n";
        cout << "Employee Name: " << name << "\n";
        cout << "Employee Salary: " << salary << "\n";
    }
};

int main() {
    Male obj1;
    Female obj2;

    obj1.setData();
    obj1.computePay();
    obj1.display();

    obj2.setData();
    obj2.computePay();
    obj2.display();

    return 0;
}

