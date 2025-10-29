// Ask the user for an integer and print whether it’s even or odd.

# include <iostream>
using namespace std;

int main (){
    int number ;
    
    cout << "Please enter a number: " << endl;
    cin >> number;

    if (number %2 !=0){
        cout << number << " is odd" << endl;
    }
    else{
        cout << number << " is even" << endl;
    }

    return 0;

}
