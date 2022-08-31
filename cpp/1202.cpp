#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int fibonacci(int n)
{
    int a = 0, b = 1, c = 0, i;

    if (n < 2) {
        return n;
    }

    for (i = 0; i < n - 1; i++) {
        c = a + b;
        c %= 1000;
        a = b;
        b = c;
    }

    return c;
}

int main()
{
    int t;
    cin >> t;

    for (t; t > 0; t--) {
        int n = 0, i;
        string binary;
        cin >> binary;

        for (i = 0; i < binary.length(); i++) {
            n *= 2;
            n += (int)(binary[i]) - 48;
            n %= 1500;
        }

        printf("%03d\n", fibonacci(n));
    }

    return 0;
}