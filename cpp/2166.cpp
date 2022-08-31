#include <stdio.h>

using namespace std;

double sqrt(double n, int r)
{
    if (r == 1) {
        return 1 + 1 / n;
    } else {
        return sqrt(2 + 1 / n, r - 1);
    }
}

int main()
{
    int repetitions;
    scanf("%d", &repetitions);

    if (repetitions == 0) {
        printf("1.0000000000\n");
    } else {
        printf("%.10f\n", sqrt(2.0, repetitions));
    }

    return 0;
}