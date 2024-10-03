#include <iostream>
#include <conio.h>
using namespace std;

int main() { 
    int i, ballot, a;
    int count[6] = {0}; 

    do {
        cout << "Enter the ballot number (1-5 for candidates, 0 for spoilt ballot): ";
        cin >> ballot;

        switch (ballot) {
            case 1:
                count[1]++;
                break;
            case 2:
                count[2]++;
                break;
            case 3:
                count[3]++;
                break;
            case 4:
                count[4]++;
                break;
            case 5:
                count[5]++;
                break;
            case 0:
                count[0]++;
                break;
            default:
                cout << "Invalid ballot number." << endl; 
        }

        system("cls"); 
        cout << "Do you want to continue? (0 to end, 1 to continue): ";
        cin >> a;

    } while (a == 1); 

    cout << "Declare results:" << endl;
    for (i = 1; i <= 5; i++) {
        cout << "Number of votes for candidate " << i << " = " << count[i] << endl;
    }
    cout << "Spoilt ballots: " << count[0] << endl;

    getch(); 
    return 0; 
}

