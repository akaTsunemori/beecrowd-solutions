#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    for (i = 1; i < 11; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }

    return 0;
}