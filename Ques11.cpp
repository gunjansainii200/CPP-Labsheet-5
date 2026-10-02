
// Q11. Write a program to calculate factorial
// of a number using while loop.

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined";
    }
    else
    {
        while (i <= n)
        {
            fact = fact * i;
            i++;
        }

        cout << "Factorial = " << fact;
    }

    return 0;
}

// Output:
// Enter a number: 5
// Factorial = 120
