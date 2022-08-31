#include <iostream>

using namespace std;

int main()
{
    int fibs[41];
    fibs[0] = 0;
    fibs[1] = 1;

    for (int i = 2; i < 42; i++) {
        fibs[i] = fibs[i - 1] + fibs[i - 2];
    }

    int n, m;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> m;
        cout << "fib(" << m << ") = " << 2 * fibs[m + 1] - 2 << " calls = " << fibs[m] << '\n';
    }

    return 0;
}