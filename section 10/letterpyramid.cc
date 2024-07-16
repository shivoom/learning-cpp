#include <iostream>
#include <string>
using namespace std;

int main (){
    string input {};
    cout << "Enter a string of characters to make a letter pyramid: ";
    cin >> input;
    for (size_t i{}; i < input.size(); i++){        
        
        for (int spaces {}; spaces < input.size()-i; spaces++){
            cout << " ";
        }
        
        string j {input, 0, i+1};
        cout << j;
        for (size_t x {}; x < i; x++){
            cout << input.at(i-x-1);
        }
        cout << endl;
    }
    return 0;  
}