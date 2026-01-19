#include <iostream>
using namespace std;

int main(){
   
    int x= -30;
    

    if(x > 0){
        cout << x << " is a positive number." << endl;
    } else if(x < 0){
        cout << x << " is a negative number." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    return 0;
}
