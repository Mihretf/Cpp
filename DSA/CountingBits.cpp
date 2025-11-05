#include <iostream>
using namespace std;

// Function to count set bits in an integer
int countSetBits(int n) {
    int count = 0; // Initialize count of set bits

    // Loop until n becomes 0
    while (n > 0) {
        // Check if the least significant bit is 1
        if (n & 1) {
            count++; // Increment count if bit is set
        }
        // Right shift n by 1 to check the next bit
        n = n >> 1;
    }
    return count;
}

int main() {
    int number = 13; // Example number

    // Print binary representation for clarity
    cout << "Binary of " << number << " is: ";
    for (int i = 7; i >= 0; i--) {
        cout << ((number >> i) & 1);
    }
    cout << endl;

    // Count and print the number of set bits
    int result = countSetBits(number);
    cout << "Number of set bits in " << number << " is: " << result << endl;

    return 0;
}