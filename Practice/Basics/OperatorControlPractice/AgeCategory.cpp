// Take a user’s age and print whether they are:
// “Child” (0–12)
// “Teen” (13–19)
// “Adult” (20–64)
// “Senior” (65+)


#include <iostream>
using namespace std;

int main (){
    int age;

    cout << "Please enter your age: ";
    cin >> age;

    if ( age >=0 && age <=12){
        cout << "Child";
    }else if (age >=13 && age <=19){
        cout << "Teen";
    }else if (age >=20 && age <=64){
        cout << "Adult";
    }else if (age >= 65)
    {
        cout << "Senior";
    }

    return 0;
}