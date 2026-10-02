
// Q17. Write a program to display all perfect
// numbers between 1 and 1000.

#include <iostream>
using namespace std;

int main()
{
    int sum;

    cout << "Perfect numbers between 1 and 1000: ";

    for (int n = 1; n <= 1000; n++)
    {
        sum = 0;

        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                sum = sum + i;
            }
        }

        if (sum == n && n > 1)
        {
            cout << n << " ";
        }
    }

    return 0;
}

// Output:
// Perfect numbers between 1 and 1000: 6 28 496
