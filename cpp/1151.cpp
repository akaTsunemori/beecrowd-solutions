#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, b = 1;
    cin >> n;
    cout << a;

    for (n; n > 2; n--) {
        cout << ' ' << b;
        b = a + b;
        a = b - a;
    }

    cout << ' ' << b << '\n';
    return 0;
}