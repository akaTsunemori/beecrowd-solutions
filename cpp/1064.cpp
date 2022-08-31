#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int c = 0, i;
    float n[6];
    cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5];

    for (i = 0; i < 6; i++) {
        if (n[i] > 0) {
            c++;
        }
    }

    printf("%d valores positivos\n", c);
    return 0;
}