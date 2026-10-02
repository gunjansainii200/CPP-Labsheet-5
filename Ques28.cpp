
// Q28. Write a program to find the sum
// of natural numbers from 1 to N using a loop.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "Sum = " << sum;

    return 0;
}

// Output:
// Enter a number: 10
// Sum = 55
