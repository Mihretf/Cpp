// Write a function that is named sum from to that takes two integer arguments, call them first and last
// and return the sum of the integer between the first and last elements

// (4,7) = 22 => 4,5,6,7
// (-3,1)
//(7,4) 

#include <iostream>
using namespace std;

int sumFromTo(int first, int last){
    int sum =0;

    if(first >last){
    int temp = first;
    first = last;
    last = first;
    }
   

    for (int i= first; i<=last; i++ ){
        sum+=i;
    }
    return sum;

}

int main(){
    int first, last;
    cout <<"Please enter the first number: "<< endl;
    cin >> first;
    cout << "Please enter the second number: "<< endl;
    cin >> last;

    cout << "The sum is " << sumFromTo(first, last);
    return 0;

}