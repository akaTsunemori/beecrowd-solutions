#include <stdio.h>

using namespace std;

int main()
{
    float i = 0, j = 10;

    while (i <= 20) {
        printf("I=%g J=%g\nI=%g J=%g\nI=%g J=%g\n", i / 10, j / 10, i / 10, j / 10 + 1, i / 10, j / 10 + 2);
        i += 2;
        j += 2;
    }

    return 0;
}