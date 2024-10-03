#include <iostream>
using namespace std;

class Publisher {
protected:
    char name[20];
public:
    void set() {
        cout << "BOOK Name: ";
        cin >> name;
    }
    void out() const {
        cout << "BOOK Name: " << name << endl;
    }
};

class Book : public Publisher {
private:
    int page;
public:
    void get() {
        cout << "BOOK PAGE No: ";
        cin >> page;
    }
    void disp() const {
        cout << "BOOK PAGE No: " << page << endl;
    }
};

class Tape : public Publisher {
private:
    int time;
public:
    void get() {
        cout << "TAPE Time: ";
        cin >> time;
    }
    void disp() const {
        cout << "Playing Time: " << time << " minutes" << endl;
    }
};

int main() {
    char ch;

    do {
        cout << "B -> BOOK\nT -> TAPE\nChoice: ";
        cin >> ch;

        if (ch == 'b' || ch == 'B') {
            Book b1;
            b1.set();
            b1.get();
            b1.out();
            b1.disp();
        } else if (ch == 't' || ch == 'T') {
            Tape t1;
            t1.set();  
            t1.get();
            t1.out(); 
            t1.disp();
        } else {
            cout << "Invalid choice. Please enter B or T." << endl;
        }

        cout << "\nY -> Continue\nX -> Exit\nChoice: ";
        cin >> ch;
    } while (ch != 'x' && ch != 'X'); 

    return 0;
}

