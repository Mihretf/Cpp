// Write a function that accepts year as a parameter return 1 if the year is a leap year and 0 if the year is not
// function name isLeapYear
// if Divisible by 4: the divisble by 100, then by 400

#include <iostream>
using namespace std;

int isLeapYear(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        return 1;  // Leap year
    } else {
        return 0;  // Not a leap year
    }
}

int main() {
    int year;
    cout << "Please enter the year: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

