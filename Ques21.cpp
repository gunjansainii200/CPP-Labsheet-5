
 // Q21. Write a program to find the sum of
 // even and odd digits of a number.

#include <iostream>
using namespace std;

int main() {
    int n, digit;
    int evenSum = 0, oddSum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 == 0) {
            evenSum = evenSum + digit;
        } else {
            oddSum = oddSum + digit;
        }

        n = n / 10;
    }

    cout << "Sum of even digits = " << evenSum << endl;
    cout << "Sum of odd digits = " << oddSum;

    return 0;
}

// Output:
// Enter a number: 123456
// Sum of even digits = 12
// Sum of odd digits = 9
