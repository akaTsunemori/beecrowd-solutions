#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int d, m = 0, y = 0;
    cin >> d;

    if (d >= 365) {
        y = floor((float)(d) / 365);
        d -= y * 365;
    }

    if (d >= 30) {
        m = floor((float)(d) / 30);
        d -= m * 30;
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
    return 0;
}