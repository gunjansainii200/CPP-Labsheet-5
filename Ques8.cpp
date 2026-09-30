// Q8. Write a program to print multiplication table for a given number,
// but stop when the product exceeds 50.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        int product = n * i;

        if (product > 50)
            break;

        cout << n << " x " << i << " = " << product << endl;
    }

    return 0;
}

// Output:
// Enter a number: 7
// 7 x 1 = 7
// 7 x 2 = 14
// 7 x 3 = 21
// 7 x 4 = 28
// 7 x 5 = 35
// 7 x 6 = 42
// 7 x 7 = 49
