#include <iostream>

int main() {
    
    int favorite_number;
    std::cout << "What's your favorite number from 1 to 100:";
    std::cin >> favorite_number;
    std::cout <<  "No way, " << favorite_number << " is my favorite number too!!" << std::endl;

    return 0;
}
