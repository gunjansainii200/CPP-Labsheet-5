
// Q19. Write a program to display all
// Strong numbers between 1 and 500.

#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, fact, sum;

    cout << "Strong numbers between 1 and 500: ";

    for (n = 1; n <= 500; n++) {
        temp = n;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            fact = 1;

            for (int i = 1; i <= digit; i++) {
                fact = fact * i;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == n) {
            cout << n << " ";
        }
    }

    return 0;
}

// Output:
// Strong numbers between 1 and 500: 1 2 145
