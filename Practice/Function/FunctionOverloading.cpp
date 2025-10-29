#include <iostream>
using namespace std;

void print(int n ){
    cout << "Printing integer: " <<n << endl;
}

void print(double d){
    cout <<"Printing double: "<< d<< endl;
}
void print(string s){
    cout << "Printing string: " << s <<endl;
}

int main (){

    print (5);
    print (5.55);
    print("Hello A2SV!");
    return 0;
}