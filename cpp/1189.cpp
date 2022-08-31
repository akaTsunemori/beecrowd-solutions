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
    int index = 12, step = 1, swi = 2, i;
    float m[144], result = 0;
    char op;
    cin >> op;

    for (i = 0; i < 144; i++) {
        cin >> m[i];
    }

    while (step > -1) {
        result += sum(m, index, index + step);
        index += 12;

        if (swi == 2) {
            step++;
        } else if (swi == 0) {
            step--;
        }

        if (step == 5) {
            swi--;
        }
    }

    if (op == 'S') {
        printf("%.1f\n", result);
    } else {
        printf("%.1f\n", result / 30);
    }

    return 0;
}