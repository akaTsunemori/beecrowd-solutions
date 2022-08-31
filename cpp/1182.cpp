#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int c, i;
    float m[144], sum = 0, len = 0;
    char op;
    cin >> c >> op;

    for (i = 0; i < 144; i++) {
        cin >> m[i];
    }

    for (i = c; i < 144; i += 12) {
        sum += m[i];
        len++;
    }

    if (op == 'S') {
        printf("%.1f\n", sum);
    } else {
        printf("%.1f\n", sum / len);
    }

    return 0;
}