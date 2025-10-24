#include <iostream>
using namespace std;

int main (){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(number >0) {
        cout << "The number is positive." << endl;

    }
    else if(number <0) {
        cout << "The number is not positive"<< endl;
    }
    else{
        cout<<"Zero" <<endl;
    }
    return 0;
}