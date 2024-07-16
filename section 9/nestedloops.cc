#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> vec {1,2,3,4,5,6,7};
    int result {};
    int product {};

    for (int num1 {}; num1 < vec.size(); num1++){
        for (int num2 {num1 + 1}; num2 < vec.size(); num2++){
                cout << vec.at(num1) << " " << vec.at(num2) << endl;
                product = vec.at(num1) * vec.at(num2);
                result += product;
        }
    } 
    cout << result << endl;

    return 0;
}