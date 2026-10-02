
// Q24. Write a program to display
// multiplication tables from 1 to 10.

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Table of " << i << ":" << endl;

        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << endl;
    }

    return 0;
}

// Output:
// Table of 1:
// 1 x 1 = 1
// 1 x 2 = 2
// ...
// 1 x 10 = 10
//
// Table of 2:
// 2 x 1 = 2
// ...
// 2 x 10 = 20
//
// ...
//
// Table of 10:
// 10 x 1 = 10
// ...
// 10 x 10 = 100
