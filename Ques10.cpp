// Q10. Write a program to count positive numbers entered
// by the user until 0 is entered (break).

#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter numbers (0 to stop): ";

    while (true)
    {
        cin >> num;

        if (num == 0)
            break;

        if (num > 0)
            count++;
    }

    cout << "Total positive numbers = " << count;

    return 0;
}

// Output:
// Enter numbers (0 to stop): 5
// -2
// 8
// 10
// -4
// 0
// Total positive numbers = 3
