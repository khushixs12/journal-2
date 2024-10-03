#include <iostream>
using namespace std;

class Calendar {
private:
    int day;
    int month;
    int year;

    
    void normalize() {
        
        while (day > 30) {
            day -= 30;
            month++;
        }
        while (month > 12) {
            month -= 12;
            year++;
        }
    }

public:
    
    Calendar() : day(1), month(1), year(2000) {}  

    
    Calendar(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
        normalize();
    }

    
    void addDays(int daysToAdd) {
        day += daysToAdd;
        normalize();  
    }

    
    void display() const {
        cout << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/"
             << year << endl;
    }
};

int main() {
    Calendar c1(12, 6, 2022);
    cout << "Initial date: ";
    c1.display();
    
    int daysToAdd;
    cout << "Enter days to add: ";
    cin >> daysToAdd;
    
    c1.addDays(daysToAdd);
    cout << "Updated date: ";
    c1.display();
    
    return 0;
}

