#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "Mihret";

    cout << "Hello " << name << "!" << endl;
    cout << "Length: " << name.length() << endl;

    name+= " Fekadu";
    cout << "Full name: " << name <<endl;

    return 0;

}