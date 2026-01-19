#include <iostream>
using namespace std;

int main(){
    int number;
    cout<< "Enter an integer: ";
    cin >> number;
    if(number % 5 == 0){
        cout << number << " is divisible by 5." << endl;
    } else {
        cout << number << " is not divisible by 5." << endl;
    }
    return 0;
}