#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a;
    float b;
    cin >> a >> b;
    printf("%.3f km/l\n", a / b);
    return 0;
}