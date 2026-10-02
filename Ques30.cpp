// Q30. Write a program to find the sum
// of cubes of natural numbers from 1 to N.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + (i * i * i);
    }

    cout << "Sum of cubes = " << sum;

    return 0;
}

// Output:
// Enter a number: 5
// Sum of cubes = 225
