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
    int index = 12, step = 0, i;
    float m[144], result = 0;
    char op;
    cin >> op;

    for (i = 0; i < 144; i++) {
        cin >> m[i];
    }

    while (step < 11) {
        result += sum(m, index, index + step + 1);
        index += 12;
        step++;
    }

    if (op == 'S') {
        printf("%.1f\n", result);
    } else {
        printf("%.1f\n", result / 66);
    }

    return 0;
}