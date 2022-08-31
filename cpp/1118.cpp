#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    float g, grades[2];
    int i = 0, check;

    while (true) {
        scanf("%f", &g);

        if (g < 0 || g > 10) {
            printf("nota invalida\n");
            continue;
        } else {
            grades[i++] = g;
        }

        if (i == 2) {
            printf("media = %.2f\n", (grades[0] + grades[1]) / 2);

            while (true) {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &check);

                if (check == 2) {
                    return 0;
                } else if (check == 1) {
                    i = 0;
                    float grades[2];
                    break;
                } else {
                    continue;
                }
            }
        }
    }
}