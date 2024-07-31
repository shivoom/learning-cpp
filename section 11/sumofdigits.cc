#include <iostream>
#include <string>
using namespace std;

int sum_of_digits(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sum_of_digits(n/10);
}

int main() {
    int num {};
    cout << "Enter a integer: ";
    cin >> num;
    cout << "The sum of the digits: " << sum_of_digits(num) << endl;
    return 0;
}