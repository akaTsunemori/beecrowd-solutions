#include <stdio.h>

using namespace std;

int main()
{
    float p[5] = {4, 4.5, 5, 2, 1.5};
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Total: R$ %.2f\n", p[a - 1] * b);
    return 0;
}