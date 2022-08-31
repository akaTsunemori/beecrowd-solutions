#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int alcohol = 0, gas = 0, diesel = 0, n, i;
    cin >> n;

    while (n != 4) {
        switch (n) {
            case 1:
                alcohol++;
                break;
            
            case 2:
                gas++;
                break;

            case 3:
                diesel++;
                break;
        }

        cin >> n;
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", diesel);
    return 0;
}