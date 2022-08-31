#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b * b - 4 * a * c;

    if (a == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        printf("R1 = %.5f\n", (-b + sqrt(delta)) / (2 * a));
        printf("R2 = %.5f\n", (-b - sqrt(delta)) / (2 * a));
    }

    return 0;
}