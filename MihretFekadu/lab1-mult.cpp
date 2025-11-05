// Write a function named mult() that accepts two floating number
//  as parameters and multiplies the results and displays it

# include <iostream>
using namespace std;

int mult(float a, float b) {
    return a*b;   
}

int main (){
    float a, b;
    cout << "Please enter the first number: " << endl;
    cin >> a;
    cout << "Please enter the second number: " <<endl;
    cin >> b;
    cout << "The multiple is " << mult(a,b);
    return 0;
}