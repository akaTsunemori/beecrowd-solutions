#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    bool l = (a % 2 == 0), c = (b % 2 == 0);

    if (l && c) {
        cout << 1 << '\n';
    } else if (!l && c) {
        cout << 0 << '\n';
    } else if (l && !c) {
        cout << 0 << '\n';
    } else {
        cout << 1 << '\n';
    }

    return 0;
}