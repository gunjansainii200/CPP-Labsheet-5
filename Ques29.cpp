// Q29. Write a program to find the sum
// of squares of natural numbers from 1 to N.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }

    cout << "Sum of squares = " << sum;

    return 0;
}

// Output:
// Enter a number: 5
// Sum of squares = 55
