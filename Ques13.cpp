
// Q13. Write a program to find and print all
// prime numbers between 1 and N.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers: ";

    for (int num = 2; num <= n; num++)
    {
        bool prime = true;

        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
        {
            cout << num << " ";
        }
    }

    return 0;
}

// Output:
// Enter a number: 20
// Prime numbers: 2 3 5 7 11 13 17 19
