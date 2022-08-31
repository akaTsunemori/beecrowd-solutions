#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    int in = 0, out = 0, n, i, j;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &j);

        if (10 <= j && j <= 20) {
            in++;
        } else {
            out++;
        }
    }

    printf("%d in\n%d out\n", in, out);
    return 0;
}