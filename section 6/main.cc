#include <iostream>
using namespace std;

int main() {

    int small_rooms;
    int large_rooms;
    cout << "Number of small rooms: ";
    cin >> small_rooms;
    cout << "Number of large rooms: ";
    cin >> large_rooms;
    

    const double small_rooms_price {25};
    const double large_rooms_price {35};
    cout << "Price per small room: $" << small_rooms_price << endl;
    cout << "Price per large room: $" << large_rooms_price << endl;
    
    double cost {(small_rooms*small_rooms_price)+(large_rooms*large_rooms_price)};
    cout << "Cost: $" << cost << endl;

    const double tax_rate {0.06};
    cout << "Tax: $" << tax_rate*cost << endl;
    cout << "=======================================================" << endl;
    cout << "Total estimate: $" << (tax_rate*cost)+(cost) << endl;
    cout << "This estimate is valid for 30 days";

    return 0;
}