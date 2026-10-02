
// Q16. Write a program to check whether
// a number is a perfect number.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (n > 1 && sum == n)
        cout << "Perfect number";
    else
        cout << "Not a perfect number";

    return 0;
}

// Output:
// Enter a number: 6
// Perfect number
