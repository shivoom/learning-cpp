#include <iostream>
#include <string>
using namespace std;

int main () {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string cipher   {"QWerTyuIoPasDfGHJkLZxCvBnmqwERtYUiOpASdFghjKlzXcVbNM "};
    string message {};

    cout << "Enter a message to be encrypted: ";
    getline(cin, message);
    for (size_t i {}; i < message.size(); i++){
        //if message contains character not in alphabet (like integers) it does not substitute it
        // string::npos is the error code if a character is not found
        if (alphabet.find(message.at(i)) != string::npos){
            cout << cipher.at(alphabet.find(message.at(i)));
        } else {
            cout << message.at(i);
        }
    }
    return 0;
}