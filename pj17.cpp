#include <iostream>
#include <cstring> 
using namespace std;

class Scheme {
protected:
    int id;
    float out; 
    float msg; 
    char name[20];
};

class Customer : public Scheme {
private:
    int cu_id;
    char cu_name[20]; 
    char no[15];      

public:
    void cu_info() {
        cout << "CUSTOMER ID: ";
        cin >> cu_id;
        cout << "CUSTOMER NAME: ";
        cin >> cu_name;
        cout << "PHONE NUMBER: ";
        cin >> no;
        cout << "OUTGOING CALL: ";
        cin >> out;
        cout << "OUTGOING MSG: ";
        cin >> msg;
    }

    void set_scheme(int n) {
        id = n;
        if (id == 1) {
            out *= 2;
            msg *= 0.6;
            strcpy(name, "JIO");
        } else if (id == 2) {
            out *= 2.2;
            msg *= 0.7;
            strcpy(name, "AIRTEL");
        } else if (id == 3) {
            out *= 2.4;
            msg *= 0.7;
            strcpy(name, "IDEA");
        } else {
            cout << "Invalid Scheme ID." << endl;
        }
    }

    void disp_bill() {
        cout << "\nY O U R  B I L L";
        cout << "\nCUSTOMER ID: " << cu_id;
        cout << "\nCUSTOMER NAME: " << cu_name;
        cout << "\nPHONE NUMBER: " << no;
        cout << "\nSCHEME ID: " << id;
        cout << "\nSCHEME NAME: " << name;
        cout << "\nOUTGOING RATE: " << out << " Rs.";
        cout << "\nMESSAGE CHARGE: " << msg << " Rs." << endl;
    }
};

int main() {
    int ch;
    Customer obj1;

    obj1.cu_info();

    do {
        cout << "S.ID  SIM              SCHEME ";
        cout << "\n1    JIO   -> CALL: 2 Rs.   MSG: 0.6 Rs.";
        cout << "\n2    AIRTEL-> CALL: 2.2 Rs. MSG: 0.7 Rs.";
        cout << "\n3    IDEA  -> CALL: 2.4 Rs. MSG: 0.7 Rs.";
        cout << "\nEnter the Scheme ID: ";
        cin >> ch;

        if (ch >= 1 && ch <= 3) {
            obj1.set_scheme(ch);
            obj1.disp_bill();
            break; 
        } else {
            cout << "Enter Valid Scheme ID." << endl;
        }
    } while (true); 

    return 0;
}

