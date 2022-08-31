#include <stdio.h>

using namespace std;

int main() {
    int a, b, i = 0, quotient, remainder;
    scanf("%d %d", &a, &b);

    remainder = a % b;

    if (remainder < 0) {
        remainder = (b < 0) ? remainder - b : remainder + b;
    }

    quotient = int((a - remainder) / b);
    printf("%d %d\n", quotient, remainder);

    return 0;
}