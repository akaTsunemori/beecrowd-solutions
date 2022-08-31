#include <iostream>
#include <stdio.h>

using namespace std;

float sum(float m[], int s, int e)
{
    float sum = 0;

    for (s; s < e; s++) {
        sum += m[s];
    }

    return sum;
}

int main()
{
    int left = 133, right = 143, i;
    float m[144], result = 0;
    char op;
    cin >> op;

    for (i = 0; i < 144; i++) {
        cin >> m[i];
    }

    while (left > 88) {
        result += sum(m, left, right);
        left -= 11;
        right -= 13;
    }

    if (op == 'S') {
        printf("%.1f\n", result);
    } else {
        printf("%.1f\n", result / 30);
    }

    return 0;
}