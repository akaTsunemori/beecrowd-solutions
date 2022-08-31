#include <stdio.h>

using namespace std;

int josephus(int n, int k)
{
    if (n == 1) {
        return 1;
    } else {
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
}

int main()
{
    int c, n, k;
    scanf("%d", &c);

    for (int i = 1; i <= c; i++) {
        scanf("%d %d", &n, &k);
        printf("Case %d: %d\n", i, josephus(n, k));
    }

    return 0;
}