// Q7. Write a program to read numbers until -1 is entered,
// skip negative numbers using continue.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter numbers (-1 to stop): ";

    while (true)
    {
        cin >> num;

        if (num == -1)
            break;

        if (num < 0)
            continue;

        cout << "Number: " << num << endl;
    }

    return 0;
}

// Output:
// Enter numbers (-1 to stop): 10
// Number: 10
// -5
// 20
// Number: 20
// -1
