//Recreating section 9 list manager but with functions
#include <iostream>
#include <vector>
using namespace std;

void display_menu();
void quit ();
char input ();
void print_list (vector <int> &);
void add_num (vector <int> &);
void mean (vector <int> &);
void smallest_num (vector <int> &);
void largest_num (vector <int> &);

int main () {
    vector <int> list;
    bool done {false};
    char choice {};
    display_menu();
    do {
        choice = input();
        if (choice == 'P')
            print_list(list);
        else if (choice == 'A')
            add_num(list);
        else if (choice == 'M')
            mean(list);
        else if (choice == 'S')
            smallest_num(list);
        else if (choice == 'L')
            largest_num(list);
        else if (choice == 'Q'){
            quit();
            done = true;
        }
    } while (!done);

    return 0;
}

void display_menu () {
    cout << "List Options: " << endl << 
    "P - Print Numbers" << endl << 
    "A - Add a number to the list" << endl << 
    "M - Display mean of the numbers" << endl << 
    "S - Display Smallest Number" << endl << 
    "L - Display Largest Number" << endl << 
    "Q - Quit" << endl << endl;
}
void quit (){
    cout << "Goodbye!" << endl;
}
char input (){
    char choice {};
    cout << "Enter your choice: ";
    cin >> choice;
    choice = toupper(choice);
    if (choice == 'P' || choice == 'A' || choice == 'M' || choice == 'S' || choice == 'L' || choice == 'Q') {
        return choice;
    } else {
        cout << "Invalid input. Try again." << endl;
        input();
        return 0;
    }
}
void print_list(vector <int> &list){
    if (list.size() != 0){
        cout << "[";
        for (int i{}; i < list.size()-1; i++){
            cout << list.at(i) << " ";
        }
        cout << list.at(list.size()-1) << "]" << endl;
    } else {
        cout << "[]" << " - List is empty" << endl;
    }
}
void add_num (vector <int> &list){
    int num {};
    cout << "Enter the number that you want to add: ";
    cin >> num;
    list.push_back(num);
    cout << num << " has been added to the list." << endl;
}
void mean (vector <int> &list){
    double mean {};
    if (list.size() != 0){
        for (int i {}; i < list.size(); i++){
            mean += list.at(i);
        }
        mean = static_cast<double> (mean) / list.size();
        cout << "The mean is: " << mean << endl;
    } else {
        cout << "Unable to calculate mean - No data." << endl;
    }
}
void smallest_num (vector <int> &list){
    int min_value {};
    if (list.size() != 0){
        min_value = list.at(0);
        for (int i {}; i < list.size(); i++){
            if (list.at(i) < min_value){
                min_value = list.at (i);
            } 
        }
        cout << "The smallest number is " << min_value << endl;
    } else {
        cout << "Unable to determine smallest number - No values in list." << endl;
    }
}
void largest_num (vector <int> &list){
    int max_value {};
    if (list.size() != 0){
        max_value = list.at(0);
        for (int i {}; i < list.size(); i++){
            if (list.at(i) > max_value){
                max_value = list.at (i);
            }
        }
        cout << "The largest number is " << max_value << endl;
    } else {
        cout << "Unable to determine largest number - No values in list." << endl;
    }
}