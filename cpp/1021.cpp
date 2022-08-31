#include <stdio.h>

using namespace std;

int main()
{
    float v, n[12] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int c;
    bool type = true;
    scanf("%f", &v);

    printf("NOTAS:\n");

    for (int i = 0; i < 12; i++) {
        if (n[i] == 1.0F) {
            type = false;
            printf("MOEDAS:\n");
        }

        c = (int)((v + 0.001F) / n[i]);
        printf("%d %s(s) de R$ %.2f\n", c, (type == true) ? "nota" : "moeda", n[i]);
        v -= n[i] * c;
    }

    return 0;
}