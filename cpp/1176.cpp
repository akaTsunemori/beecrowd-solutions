#include <stdio.h>

using namespace std;

long long int fib(int n)
{
    long long int a = 0, b = 1, i;

    if (n == 0) {
        return a;
    }

    for (i = 2; i <= n; i++) {
        b = b + a;
        a = b - a;
    }

    return b;
}

int main()
{
    int n, m, i;
    scanf("%d", &n);

    for (n; n > 0; n--) {
        scanf("%d", &m);
        printf("Fib(%d) = %lld\n", m, fib(m));
    }

    return 0;
}