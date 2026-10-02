
// Q15. Write a program to display Armstrong
// numbers between 1 and 500.

#include <iostream>
using namespace std;

int main()
{
    int num, rem, sum;

    cout << "Armstrong numbers between 1 and 500: ";

    for (int i = 1; i <= 500; i++)
    {
        num = i;
        sum = 0;

        while (num > 0)
        {
            rem = num % 10;
            sum = sum + rem * rem * rem;
            num = num / 10;
        }

        if (sum == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}

// Output:
// Armstrong numbers between 1 and 500:
// 1 153 370 371 407
