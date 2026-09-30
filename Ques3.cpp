// Q3. Write a program to search for a number in a sequence;
// stop searching if found (break).

#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int search;

    cout << "Enter number to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            cout << "Number found!";
            break;
        }
    }

    return 0;
}

// Output:
// Enter number to search: 30
// Number found!
