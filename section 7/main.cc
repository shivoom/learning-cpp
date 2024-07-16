#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> vector1 {};
    vector <int> vector2 {};

    vector1.push_back (10);
    vector1.push_back (20);
    cout << "Vector 1:" << endl;
    cout << "first item is " << vector1.at (0) << " second item is " << vector1.at (1) << endl;
    cout << "size is " << vector1.size () << endl;

    vector2.push_back (100);
    vector2.push_back (200);
    cout << "Vector 2:" << endl;
    cout << "first item is " << vector2.at(0) << " second item is " << vector2.at (1) << endl;
    cout << "size is " << vector2.size () << endl;
    
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "This is the 2d vector:" << endl;
    cout << "[ " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << " ]" << endl;

    cout << "This is vector 1:" << endl;
    cout << vector1.at (0) << endl;
    cout << vector1.at (1) << endl;
    return 0;
}