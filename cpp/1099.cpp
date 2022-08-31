#include <iostream>

using namespace std;

int main()
{
    int i, j, m, n;
    cin >> i;

    for (i; i > 0; i--) {
        int s = 0;
        cin >> m >> n;

        if (m > n) {
            m = m + n;
            n = m - n;
            m = m - n;
        }

        for (++m; m < n; m++) {
            if (m % 2 != 0) {
                s += m;
            }
        }

        cout << s << '\n';
    }

    return 0;
}