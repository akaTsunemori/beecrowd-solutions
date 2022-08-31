#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, i, s[3];
    scanf("%d %d %d", &a, &b, &c);
    s[0] = a;
    s[1] = b;
    s[2] = c;
    sort(s, s + 3);
    printf("%d\n%d\n%d\n\n", s[0], s[1], s[2]);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}