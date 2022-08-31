#include <iostream>

using namespace std;

int main()
{
    int m, n, s = 0;
    cin >> m >> n;

    if (m > n) {
        m = m + n;
        n = m - n;
        m = m - n;
    }

    for (m; m <= n; m++) {
        if (m % 13 != 0) {
            s += m;
        }
    }

    cout << s << '\n';
    return 0;
}