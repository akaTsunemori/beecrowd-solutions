#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    if ((3 * a + b + c) == (3 * d + e + f)) {
        cout << "=\n";

    } else if ((3 * a + b) > (3 * d + e)) {
        cout << "C\n";

    } else if ((3 * a + b) < (3 * d + e)) {
        cout << "F\n";

    } else if ((3 * a + b + c) > (3 * d + e + f)) {
        cout << "C\n";

    } else {
        cout << "F\n";

    }

    return 0;
}