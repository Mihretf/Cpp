#include <iostream>
#include <string>
using namespace std;

void str (string a, string b, string c, string d, string e){
    string names[5]= {a, b,c,d,e};
    cout << "Names entered in reverse: \n";
    for (int i=4; i>=0; i--){
        cout << names[i] << endl;
    }
     
    
}

int main (){
    string a, b, c, d, e;
    cout << "Please enter your name" << endl;
    cin >> a;
    cout << "Please enter your name" << endl;
    cin >> b;
    cout << "Please enter your name" << endl;
    cin >> c;
    cout << "Please enter your name" << endl;
    cin >> d;
    cout << "Please enter your name" << endl;
    cin >> e;

    str(a,b,c,d,e);
    return 0;
}