#include <stdio.h>

using namespace std;

int main()
{
    float a0, a1, a2, b0, b1, b2;
    scanf("%f %f %f\n%f %f %f", &a0, &a1, &a2, &b0, &b1, &b2);
    printf("VALOR A PAGAR: R$ %.2f\n", a1 * a2 + b1 * b2);
    return 0;
}