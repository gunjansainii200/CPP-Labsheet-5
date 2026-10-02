
 // Q12. Write a program to generate Fibonacci
 // series using while loop.

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    int a = 0, b = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci series: ";

    while (i <= n)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
        i++;
    }

    return 0;
}

// Output:
// Enter number of terms: 7
// Fibonacci series: 0 1 1 2 3 5 8
