
// Q18. Write a program to check whether
// a number is a strong number.

#include <iostream>
using namespace std;

int main()
{
    int n, original, rem, fact, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
        rem = n % 10;
        fact = 1;

        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original && original >= 0)
        cout << "Strong number";
    else
        cout << "Not a strong number";

    return 0;
}

// Output:
// Enter a number: 145
// Strong number
