#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int v, n[7] = {100, 50, 20, 10, 5, 2, 1}, a, i;
    cin >> v;
    cout << v << '\n';

    for (i = 0; i < 7; i++) {
        a = floor((float)(v) / n[i]);
        printf("%d nota(s) de R$ %d,00\n", a, n[i]);
        v -= n[i] * a;
    }

    return 0;
}