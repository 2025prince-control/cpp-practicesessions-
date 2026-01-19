#include <iostream>
using namespace std;

int main(){
    int number;
    cout<< "Enter the number: ";
    cin >> number;
    if(number != 0){
        cout << number << " is a non-zero number." << endl;
    } else {
        cout << "The number is zero." << endl;  
    }
    return 0;   
}