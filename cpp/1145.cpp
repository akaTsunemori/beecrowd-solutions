#include <iostream>

using namespace std;

int main()
{
    int a, b, i = 1, j;
    cin >> a >> b;

    while (i < b) {
        for (j = i; j < i + a - 1; j++) {
            cout << j << ' ';
        }

        cout << j << '\n';
        i += a;
    }

    return 0;
}