#include <iostream>
#include <cstring> 
using namespace std;

class Account {
protected:
    char name[10];
    int ac_type;
    int ac_no;

public:
    void setData() {
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Account No: ";
        cin >> ac_no;
    }

    void disp(int n) {
        ac_type = n;
        cout << "\nName of Account Holder: " << name;
        cout << "\nAccount Number: " << ac_no;
        if (ac_type == 1)
            cout << "\nAccount Type: CURRENT";
        else
            cout << "\nAccount Type: SAVING";
    }
};

class CurAcc : public Account {
private:
    float balance;

public:
    CurAcc() {
        balance = 0.00;
    }

    void deposit() {
        float amount;
        cout << "Enter the Amount: ";
        cin >> amount;
        balance += amount;
        cout << "-> Amount Deposited: Rs." << amount << endl;
    }

    void withdrawal() {
        float amount;
        cout << "Enter the Amount: ";
        cin >> amount;
        if (amount > balance) {
            cout << "-> Your withdrawal exceeds Account Balance." << endl;
        } else {
            balance -= amount;
            cout << "-> Withdrawal Successful" << endl;
        }
    }

    void dispBalance() {
        cout << "\nTotal Balance: Rs." << balance << endl;
    }
};

class SavAcc : public Account {
private:
    int interest;
    float balance;

public:
    SavAcc() {
        balance = 0.00;
        interest = 0;
    }

    void deposit() {
        float amount;
        cout << "Enter the Amount: ";
        cin >> amount;
        interest = amount * 3 / 100;
        balance += amount + interest;
        cout << "-> Amount Deposited: Rs." << amount << " with Interest: Rs." << interest << endl;
    }

    void withdrawal() {
        float amount;
        cout << "Enter the Amount: ";
        cin >> amount;
        if (amount > balance) {
            cout << "-> Your withdrawal exceeds Account Balance." << endl;
        } else {
            balance -= amount;
            cout << "-> Withdrawal Successful" << endl;
        }
    }

    void dispBalance() {
        cout << "\nInterest on Amount: Rs." << interest << endl;
        cout << "Total Balance: Rs." << balance << endl;
    }
};

int main() {
    Account acc;
    CurAcc curAcc;
    SavAcc savAcc;

    int ch, no;

    cout << "Choose Account Type:\n1. CURRENT\n2. SAVING\nChoice: ";
    cin >> ch;

    if (ch == 1) {
        curAcc.setData();
        no = 0;
        do {
            cout << "\n1. Deposit\n2. Withdrawal\n3. Display Balance\n4. Exit\nChoice: ";
            cin >> no;
            switch (no) {
                case 1:
                    curAcc.deposit();
                    break;
                case 2:
                    curAcc.withdrawal();
                    break;
                case 3:
                    curAcc.dispBalance();
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        } while (no != 4);
    } else if (ch == 2) {
        savAcc.setData();
        no = 0;
        do {
            cout << "\n1. Deposit\n2. Withdrawal\n3. Display Balance\n4. Exit\nChoice: ";
            cin >> no;
            switch (no) {
                case 1:
                    savAcc.deposit();
                    break;
                case 2:
                    savAcc.withdrawal();
                    break;
                case 3:
                    savAcc.dispBalance();
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        } while (no != 4);
    } else {
        cout << "Invalid Account Type." << endl;
    }

    return 0;
}

