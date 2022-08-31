#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int c = 0;

    while (true) {
        int cons[201] = {0};
        int n, x, y, i, m;
        long long int s = 0, l = 0;
        cin >> n;

        if (n == 0) {
            break;
        }

        if (c > 0) {
            cout << '\n';
        }

        for (n; n > 0; n--) {
            cin >> x >> y;
            cons[y / x] += x;
            s += y;
            l += x;
        }

        for (i = 0; i < 201; i++) {
            if (cons[i] > 0) {
                m = i;
            }
        }

        c++;
        cout << "Cidade# " << c << ":\n";

        for (i = 0; i < m; i++) {
            if (cons[i] > 0) {
                cout << cons[i] << '-' << i << ' ';
            }
        }

        cout << cons[i] << '-' << i << '\n';
        printf("Consumo medio: %.2f m3.\n", ((100 * s) / l) / 100.0);
    }

    return 0;
}