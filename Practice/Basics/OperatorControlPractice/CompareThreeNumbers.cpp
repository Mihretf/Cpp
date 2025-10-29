// Ask for three numbers and print the largest one.

#include <iostream>
using namespace std;

int main (){
    int a, b, c;

    cout << "Please enter the first number: " ;
    cin >> a;
    cout << "Please enter the second number: " ;
    cin >> b;
    cout << "Please enter the third number: " ;
    cin >> c;

    if(a >b && a>c){
        cout << "The largest number is: " << a;
    }else if (b > a&& b >c){
        cout << "The largest number is: "<<b;
    }else if (c>a && c>b){
        cout << "The largest number is: "<<c;
    }
    return 0;
}