#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, s, i;

    while (true) {
        cin >> n;

        if (n == 0) {
            break;
        }

        s = floor(sqrt(n));

        for (i = 1; i < s; i++) {
            cout << i * i << ' ';
        }

        cout << i * i << '\n';
    }

    return 0;
}