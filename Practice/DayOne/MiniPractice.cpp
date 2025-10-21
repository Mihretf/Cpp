// Write a C++ program that:

// Asks the user for:

// Full name (can include spaces)

// Age

// Favorite color

// Height in meters (e.g., 1.72)

// Then displays a summary card like this:

// --------------------------
//        USER INFO CARD
// --------------------------
// Name: Mihret Fekadu
// Age: 20
// Favorite Color: Blue
// Height: 1.72 m
// -------------------------


#include <iostream> 
using namespace std;

int main(){

    string name;
    int age;
    string color;
    float height;

    cout << "Please enter your full name: " ;
    getline(cin, name);

    cout << "Please enter you age: ";
    cin >> age;

    cin.ignore();

    cout << "Please enter your favorite color: ";
    getline(cin, color);

    cout << "Please enter your height: ";
    cin >> height;

    cout << "USER INFO CARD \n " ;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;;
    cout << "Favorite Color: " << color <<endl;;
    cout << "Height: " << height <<endl;

    return 0;
}