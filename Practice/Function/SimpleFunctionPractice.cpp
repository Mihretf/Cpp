#include <iostream>
using namespace std;

string name(){
    string names;

    cout <<"What is your name? " << endl;
    cin >> names;

    cout << "Hello " << names << ", hope you're doing great today!" << endl;
}

int main (){
    name();
    return 0;
}