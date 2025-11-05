// Wrute a function named enough that takes one integer argument, call its "goal" and returns it as a value the smaller postive integer n for which 1+2+3+----n is alteast equal to the goal

// enough (9) // 4 because 1+2+3+4 >=9
// enough(21) // 6
// enough(1) // 1


#include <iostream>
using namespace std;

int enough(int goal) {
    int sum = 0;   // running sum
    int n = 0;     // number of integers used

    while (sum < goal) {
        n++;           // count the next integer
        sum += n;      // add it to the sum
    }

    return n;
}

int main() {
    cout << "enough(9) = " << enough(9) << endl;   // 4
    cout << "enough(21) = " << enough(21) << endl; // 6
    cout << "enough(1) = " << enough(1) << endl;   // 1
    return 0;
}
