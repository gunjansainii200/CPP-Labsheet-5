// Q6. Write a program to check if a number is prime,
// terminate loop early using break.

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
        prime = false;
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }
    }

    if (prime)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}

// Output:
// Enter a number: 7
// Prime number
