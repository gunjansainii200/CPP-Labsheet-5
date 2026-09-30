// Q9. Write a program to demonstrate default case
// when no matching switch case exists.

#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter a number between 1 and 3: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "You selected One";
            break;

        case 2:
            cout << "You selected Two";
            break;

        case 3:
            cout << "You selected Three";
            break;

        default:
            cout << "No matching case";
    }

    return 0;
}

// Output:
// Enter a number between 1 and 3: 5
// No matching case
