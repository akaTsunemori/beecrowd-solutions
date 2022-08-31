#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    printf("%d eh o maior\n", max(max(a, b), c));
    return 0;
}