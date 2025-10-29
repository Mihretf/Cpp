#include <iostream>
using namespace std;

int calculate(int a, int b, string op){
    
    if(op == "+"){
        cout << a+b << endl;
    }else if (op == "-"){
        cout << a-b<< endl;
    }else if (op == "*"){
        cout << a*b << endl;
    }else if (op == "/"){
        cout << a/b << endl;
    }
    return 0;

}

int main(){
    int a, b;
    string op;


    cout << "Please enter the first number: " << endl;
    cin >> a;
    cout << "Please enter the second number: "<<endl;
    cin >>b;
    cout <<"Please enter your operator (+,-,*,/)" <<endl;
    cin >> op;

    calculate(a, b, op);
    return 0;
}