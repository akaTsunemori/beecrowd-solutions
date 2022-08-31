#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int s;
    cin >> s;

    for (s; s > 0; s--) {
        int n, i;
        float p;
        cin >> n >> p >> i;

        if (p != 0) {
            printf("%.4f\n", (p * pow(1 - p, i - 1)) / (1 - pow(1 - p, n)));
        } else {
            cout << "0.0000\n";
        }
    }

    return 0;
}