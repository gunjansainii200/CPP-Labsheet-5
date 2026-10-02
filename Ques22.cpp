
// Q22. Write a program to check whether
// a number is a Harshad number or not.

#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    if (n > 0 && n % sum == 0) {
        cout << "Harshad number";
    } else {
        cout << "Not a Harshad number";
    }

    return 0;
}

// Output:
// Enter a number: 18
// Harshad number
