
 // Q14. Write a program to check whether
 // a given number is Armstrong or not.

#include <iostream>
using namespace std;

int main()
{
    int n, original, remainder, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
        remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }

    if (sum == original && original >= 0)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}

// Output:
// Enter a number: 153
// Armstrong number
