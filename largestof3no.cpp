#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter Numbers1: ";
    cin >> num1;
    cout << "Enter Numbers2: ";
    cin >> num2;
    cout << "Enter Numbers3: ";
    cin >> num3;
    if(num1 >= num2 && num1 >= num3){
        cout << num1 << " is the largest number." << endl;
    } else if(num2 >= num1 && num2 >= num3){
        cout << num2 << " is the largest number." << endl;
    } else {
        cout << num3 << " is the largest number." << endl;
    }
    return 0;
}