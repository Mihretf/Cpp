#include <iostream>
using namespace std; 

// function to calculate GCD using Euclidean Algorithm

int gcd(int a, int b){
    while(b!=0){
        int remainder= a %b;
        a=b;
        b= remainder;
    }
    return a;
}

// function to calculate LCM using GCD

int lcm(int a, int b){
    return (a*b) / gcd(a,b);
}

int main (){
    int num1 = 24, num2 = 36;
    
    // Calculate GCD
    int resultGCD = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << resultGCD << endl;
    
    // Calculate LCM
    int resultLCM = lcm(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is: " << resultLCM << endl;
    
    return 0;
}