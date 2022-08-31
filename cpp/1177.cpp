#include <stdio.h>

using namespace std;

int main()
{
    int n, c = 0;
    scanf("%d", &n);

    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, c);
        c++;

        if (c == n) {
            c = 0;
        }
    }

    return 0;
}