#include <iostream>
#include <vector>
using namespace std;

int main() {
    //variables
    vector <int> vec {};
    char user_choice {};
    bool done {false};
    int add {};
    float mean {};
    int max_value {};
    int min_value {};
    
    //user options
    cout << "List Options: " << endl << "P - Print Numbers\nA - Add a number to the list\nM - Display mean of the numbers\nS - Display Smallest Number\nL - Display Largest Number\nQ - Quit\n\nEnter your choice: ";
    cin >> user_choice;
    //main loop
    do {
    //check for right input
    if (user_choice == 'P' || user_choice == 'p' ||user_choice == 'A' ||user_choice == 'a' ||user_choice == 'M' ||user_choice == 'm' || user_choice == 'S' ||user_choice == 's' ||user_choice == 'L' ||user_choice == 'l' ||user_choice == 'Q' || user_choice == 'q'){
        //Print - simply printing it
        if (user_choice == 'P' || user_choice == 'p'){
            if (vec.size() != 0){
            cout << "[";
                for (int i{}; i < vec.size()-1; i++){
                cout << vec.at(i) << " ";
                }
            cout << vec.at(vec.size()-1) << "]" << endl;
            } else {
                cout << "[]" << " - List is empty" << endl;
            }
            do{
                cout << "What do you want to do next: ";
                cin >> user_choice;
            } while (user_choice != 'P' && user_choice != 'p' && user_choice != 'A' && user_choice != 'a' && user_choice != 'M' && user_choice != 'm' && user_choice != 'S' && user_choice != 's' && user_choice != 'L' && user_choice != 'l' && user_choice != 'Q' && user_choice != 'q');
        }
        //Add - using .pushback to add the new value
        if (user_choice == 'A' || user_choice == 'a'){
            bool valid_input {false};
            //check if input is in valid bounds
            
                cout << "Enter the number you would like to add: ";
                while (!(cin >> add)) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Invalid input. Enter an Integer and try again: ";
                }

            vec.push_back(add);
            cout << add << " has been added" << endl;
            do{
                cout << "What do you want to do next: ";
                cin >> user_choice;
            } while (user_choice != 'P' && user_choice != 'p' && user_choice != 'A' && user_choice != 'a' && user_choice != 'M' && user_choice != 'm' && user_choice != 'S' && user_choice != 's' && user_choice != 'L' && user_choice != 'l' && user_choice != 'Q' && user_choice != 'q');
        }
        //Mean - using static_cast to convert to a double
        if (user_choice == 'M' || user_choice == 'm'){
            if (vec.size() != 0){
                int sum {};
                for (int i{}; i < vec.size(); i++){
                    sum += vec.at(i);
                }
                mean = static_cast<double> (sum) / vec.size();
                cout << "The mean is " << mean << endl;
            } else {
            cout << "Unable to calculate mean - No data" << endl;
            }
            
            do{
                cout << "What do you want to do next: ";
                cin >> user_choice;
            } while (user_choice != 'P' && user_choice != 'p' && user_choice != 'A' && user_choice != 'a' && user_choice != 'M' && user_choice != 'm' && user_choice != 'S' && user_choice != 's' && user_choice != 'L' && user_choice != 'l' && user_choice != 'Q' && user_choice != 'q');
        } 
        //smallest - going through the list and checking if one is smaller than the previous one
        if (user_choice == 'S' || user_choice == 's'){
            if (vec.size() != 0){
                min_value = vec.at(0);
                for (int i {}; i < vec.size(); i++){
                    if (vec.at(i) < min_value){
                        min_value = vec.at (i);
                    } 
                }
                cout << "The smallest number is " << min_value << endl;
            } else {
                cout << "Unable to determine smallest number - No values in list" << endl;
            }
            
            do{
                cout << "What do you want to do next: ";
                cin >> user_choice;
            } while (user_choice != 'P' && user_choice != 'p' && user_choice != 'A' && user_choice != 'a' && user_choice != 'M' && user_choice != 'm' && user_choice != 'S' && user_choice != 's' && user_choice != 'L' && user_choice != 'l' && user_choice != 'Q' && user_choice != 'q');
        }
        //largest - same as smallest but checking greatest value
        if (user_choice == 'L'||user_choice == 'l'){
            if (vec.size() != 0){
                max_value = vec.at(0);
                for (int i {}; i < vec.size(); i++){
                    if (vec.at(i) > max_value){
                        max_value = vec.at (i);
                    }
                }
                cout << "The largest number is " << max_value << endl;
            } else {
                cout << "Unable to determine largest number - No values in list" << endl;
            }
            
            do{
                cout << "What do you want to do next: ";
                cin >> user_choice;
            } while (user_choice != 'P' && user_choice != 'p' && user_choice != 'A' && user_choice != 'a' && user_choice != 'M' && user_choice != 'm' && user_choice != 'S' && user_choice != 's' && user_choice != 'L' && user_choice != 'l' && user_choice != 'Q' && user_choice != 'q');
        }
        //quit - changes done bool value
        if (user_choice == 'Q'|| user_choice == 'q'){
            cout << "Goodbye!";
            done = true;
        }
        //if invalid option
        } else {
            cout << "Invalid Option. Try again: ";
            cin >> user_choice;
        }
    } while (!done);
    
    return 0;
}