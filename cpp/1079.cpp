#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i;
    float a, b, c;
    cin >> i;

    for (i; i > 0; i--) {
        cin >> a >> b >> c;
        printf("%.1f\n", (a * 2 + b * 3 + c * 5) / 10);
    }

    return 0;
}