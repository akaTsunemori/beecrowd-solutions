#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int s, m = 0, h = 0;
    cin >> s;

    if (s >= 3600) {
        h = floor((float)(s) / 3600);
        s -= h * 3600;
    }

    if (s >= 60) {
        m = floor((float)(s) / 60);
        s -= m * 60;
    }

    printf("%d:%d:%d\n", h, m, s);
    return 0;
}