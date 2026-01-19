#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch(ch){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            cout << ch << " is not a vowel." << endl;
    }
    return 0;
}