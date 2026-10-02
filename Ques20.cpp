
// Q20. Write a program to reverse a number
// and check whether it is a palindrome or not.

#include <iostream>
using namespace std;

int main() {
    int n, original, reverse = 0, rem;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    cout << "Reverse = " << reverse << endl;

    if (original == reverse) {
        cout << "Palindrome number";
    } else {
        cout << "Not a palindrome number";
    }

    return 0;
}

// Output:
// Enter a number: 121
// Reverse = 121
// Palindrome number
