#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    int i;
    float n;

    for (i = 0; i < 100; i++) {
        cin >> n;

        if (n <= 10) {
            printf("A[%d] = %.1f\n", i, n);
        }
    }

    return 0;
}