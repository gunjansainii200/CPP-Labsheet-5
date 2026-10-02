
// Q23. Write a program to display all
// Harshad numbers between 1 and 100.

#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, sum;

    cout << "Harshad numbers between 1 and 100: ";

    for (n = 1; n <= 100; n++) {
        temp = n;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if (n % sum == 0) {
            cout << n << " ";
        }
    }

    return 0;
}

// Output:
// Harshad numbers between 1 and 100:
// 1 2 3 4 5 6 7 8 9 10 12 18 20 21 24 27
// 30 36 40 42 45 48 50 54 60 63 70 72 ಗಳಿಗೆ 80 81 84 90 100
