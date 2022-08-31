#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    if (a < c) {
        a = a + c;
        c = a - c;
        a = a - c;
    }

    a = a - (b + c);

    if (a < b) {
        a = b;
    }

    if (a < c) {
        a = c;
    }

    cout << a << '\n';
    return 0;
}