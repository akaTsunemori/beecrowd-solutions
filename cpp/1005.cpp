#include <stdio.h>

using namespace std;

int main()
{
    float a, b;
    scanf("%f\n%f", &a, &b);
    printf("MEDIA = %.5f\n", (a * 3.5 + b * 7.5) / 11);
    return 0;
}