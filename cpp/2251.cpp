#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int c = 1, n;

    while (true) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        printf("Teste %d\n%d\n\n", c, static_cast<int>(pow(2, n) - 1));
        c += 1;
    }

    return 0;
}