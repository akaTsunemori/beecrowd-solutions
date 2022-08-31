#include <iostream>
#include <stdio.h>

using namespace std;

double sum(double m[], int s, int e)
{
    double sum = 0;

    for (s; s < e; s++) {
        sum += m[s];
    }

    return sum;
}

int main()
{
    int left = 1, right = 11, i;
    double m[144], result = 0;
    char op;
    cin >> op;

    for (i = 0; i < 144; i++) {
        cin >> m[i];
    }

    while (left < 66) {
        result += sum(m, left, right);
        left += 13;
        right += 11;
    }

    if (op == 'S') {
        printf("%.1f\n", result);
    } else {
        printf("%.1f\n", result / 30);
    }

    return 0;
}