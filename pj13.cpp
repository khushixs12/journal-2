#include <iostream>
using namespace std;

class Currency {
private:
    int rupees;
    int paisa;

    void convert() {
        if (paisa >= 100) {
            rupees += paisa / 100;
            paisa = paisa % 100;
        }
    }

public:
    Currency(int r = 0, int p = 0) : rupees(r), paisa(p) {
        convert();
    }

    friend void add_currency(Currency m, Currency n);
};

void add_currency(Currency m, Currency n) {
    Currency sum;
    sum.rupees = m.rupees + n.rupees;
    sum.paisa = m.paisa + n.paisa;
    sum.convert();  
    cout << "The sum of the currencies is: " << sum.rupees << " Rupees and " << sum.paisa << " Paisa" << endl;
}

int main() {
    Currency c1(5100, 0);  
    Currency c2(50, 200);  
    add_currency(c1, c2);
    return 0;
}

