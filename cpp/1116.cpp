#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        if (b == 0) {
            cout << "divisao impossivel" << endl;
        } else {
            float result = (float)a / b;
            printf("%.1f\n", result);
        }
    }

    return 0;
}