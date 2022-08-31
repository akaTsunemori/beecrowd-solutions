#include <stdio.h>

using namespace std;

long long int factorial(long long int n)
{
    if (n == 0) {
        return 1;
    }

    for (int i = n - 1; i > 0; i--) {
        n *= i;
    }

    return n;
}

int main()
{
    int a, b;
    
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%lld\n", factorial((long long int)(a)) + factorial((long long int)(b)));
    }

    return 0;
}