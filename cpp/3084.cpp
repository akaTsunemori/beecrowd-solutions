#include <stdio.h>

using namespace std;

int main()
{
    int h, m;

    while (scanf("%d %d", &h, &m) != EOF) {
        h /= 30;
        m /= 6;
        printf("%02d:%02d\n", h, m);
    }

    return 0;
}