#include <iostream>

using namespace std;

int main()
{
    int a, b, s = 0;
    cin >> a >> b;

    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    for (++a; a < b; a++) {
        if (a % 2 != 0) {
            s += a;
        }
    }

    cout << s << '\n';
    return 0;
}