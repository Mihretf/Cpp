// Ask the user for two numbers and an operator, then perform the calculation.

# include <iostream>
using namespace std;

int main (){
    int a, b;
    string operators;
    

    cout << "Enter the first number please: " ;
    cin >> a;
    cout << "Enter the second number please: ";
    cin >> b;
    cout << "Please enter operator: (+ , - , *, /)";
    cin >> operators;

    if (operators == "+"){
        cout << "Result: " << a+b;
    }else if(operators == "-"){
        cout << "Result: " << a-b;
    }else if(operators == "*"){
        cout << "Result: " << a*b;
    }else if(operators =="/"){
        cout << "Result: " << a/b;
    }
    return 0;

}