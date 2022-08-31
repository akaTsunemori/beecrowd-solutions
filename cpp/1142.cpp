#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    for (i = 1; i <= 4 * n; i += 4) {
        cout << i << ' ' << i + 1 << ' ' << i + 2 << " PUM\n";
    }

    return 0;
}