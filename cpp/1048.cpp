#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float salary, multiplier;
    cin >> salary;

    if (salary <= 400) {
        multiplier = 15;
    } else if (salary <= 800) {
        multiplier = 12;
    } else if (salary <= 1200) {
        multiplier = 10;
    } else if (salary <= 2000) {
        multiplier = 7;
    } else {
        multiplier = 4;
    }

    printf("Novo salario: %.2f\n", salary * (1 + multiplier / 100));
    printf("Reajuste ganho: %.2f\n", salary * (multiplier / 100));
    printf("Em percentual: %d %\n", (int)(multiplier));
    return 0;
}