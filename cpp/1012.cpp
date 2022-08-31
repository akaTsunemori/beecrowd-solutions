#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    printf("TRIANGULO: %.3f\n", a * c / 2);
    printf("CIRCULO: %.3f\n", 3.14159 * pow(c, 2));
    printf("TRAPEZIO: %.3f\n", (a + b) * c / 2);
    printf("QUADRADO: %.3f\n", pow(b, 2));
    printf("RETANGULO: %.3f\n", a * b);
    return 0;
}