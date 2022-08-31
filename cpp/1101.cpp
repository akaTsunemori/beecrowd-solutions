#include <iostream>

using namespace std;

int main()
{
    int a, b, sum;

    while (true) {
        sum = 0;
        cin >> a >> b;

        if (a <= 0 || b <= 0) {
            break;
        }

        if (a > b) {
            a = a + b;
            b = a - b;
            a = a - b;
        }

        for (a; a < b; a++) {
            cout << a << ' ';
            sum += a;
        }

        sum += a;
        cout << a << " Sum=" << sum << '\n';
    }

    return 0;
}