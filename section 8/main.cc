#include <iostream>
using namespace std;

int main () {
    int cents {0};
    int dollars {}, quarters {}, dimes {}, nickles {}, pennies {};
    cout << "enter an amount in cents: ";
    cin >> cents;
    if (cents >= 100)
        dollars = cents / 100;
        cout << "dollars: " << dollars << endl;
        cents -= dollars*100;
    if (cents >= 25)
        quarters = cents / 25;
        cout << "quarters: " << quarters << endl;
        cents -= quarters*25;
    if (cents >= 10)
        dimes = cents / 10;
        cout << "dimes: " << dimes << endl;
        cents -= dimes*10;
    if (cents >= 5)
        nickles = cents / 5;
        cout << "nickles: " << nickles << endl;
        cents -= nickles*5;
    if (cents >= 1)
        cout << "pennies: " << cents << endl;

    return 0;
}