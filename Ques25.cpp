
// Q25. Write a program to find the
// prime factors of a number.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime factors: ";

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    return 0;
}

// Output:
// Enter a number: 60
// Prime factors: 2 2 3 5
