#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int l, i;
    float m[144], sum = 0, len = 0;
    char op;
    cin >> l >> op;

    for (i = 0; i < 144; i++) {
        cin >> m[i];
    }

    for (i = l * 12; i < l * 12 + 12; i++) {
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