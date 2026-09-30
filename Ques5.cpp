// Q5. Write a program to simulate a menu-driven calculator
// with default in switch.

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Result = " << a + b;
            break;

        case 2:
            cout << "Result = " << a - b;
            break;

        case 3:
            cout << "Result = " << a * b;
            break;

        case 4:
            cout << "Result = " << a / b;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}

// Output:
// Enter two numbers: 10 5
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// Enter your choice: 1
// Result = 15
