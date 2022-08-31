#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int rabbits = 0, rats = 0, frogs = 0, total, amount, n;
    char animal;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> amount >> animal;

        switch (animal)
        {
            case 'C':
                rabbits += amount;
                break;
            
            case 'R':
                rats += amount;
                break;

            case 'S':
                frogs += amount;
                break;
        }
    }

    total = rabbits + rats + frogs;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);
    printf("Percentual de coelhos: %.2f %\n", (float)(rabbits) / total * 100);
    printf("Percentual de ratos: %.2f %\n", (float)(rats) / total * 100);
    printf("Percentual de sapos: %.2f %\n", (float)(frogs) / total * 100);
    return 0;
}