// Ask for a person’s salary and years of experience.
// If they’ve worked more than 5 years, they get a 10% bonus; otherwise, no bonus.

# include <iostream>
using namespace std;

int main(){
    int salary;
    int years;
    double bonus =0;

    cout << "Please enter your salary" ;
    cin >> salary;

    cout << "Please enter your years of experience: ";
    cin >> years;


    if(years >= 5){
        bonus = salary * 0.10;
    }

    cout << "Your bonus is: " << bonus << endl;
    cout << "Your total salary is: "<< (salary + bonus) << endl;
    
    return 0;

}