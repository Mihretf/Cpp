#include <iostream>
using namespace std;

void Average(int a, int b, int c, int d, int e) {
    cout << "Average: " << (a + b + c + d + e) / 5.0 << endl;
}

int Max(int a, int b, int c, int d, int e) {
    int maxVal = a;
    if(b > maxVal) maxVal = b;
    if(c > maxVal) maxVal = c;
    if(d > maxVal) maxVal = d;
    if(e > maxVal) maxVal = e;
    cout << "Max: " << maxVal << endl;
    return maxVal;
}

int Min(int a, int b, int c, int d, int e) {
    int minVal = a;
    if(b < minVal) minVal = b;
    if(c < minVal) minVal = c;
    if(d < minVal) minVal = d;
    if(e < minVal) minVal = e;
    cout << "Min: " << minVal << endl;
    return minVal;
}

int main() {
    int a, b, c, d, e;
    cout << "Please enter the first number: ";
    cin >> a;
    cout << "Please enter the second number: ";
    cin >> b;
    cout << "Please enter the third number: ";
    cin >> c;
    cout << "Please enter the fourth number: ";
    cin >> d;
    cout << "Please enter the fifth number: ";
    cin >> e;

    Average(a, b, c, d, e);
    Max(a, b, c, d, e);
    Min(a, b, c, d, e);

    return 0;
}
