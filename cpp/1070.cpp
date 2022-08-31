#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    if (n % 2 == 0) {
        n++;
    }

    for (i = n; i < n + 12; i += 2) {
        cout << i << '\n';
    }

    return 0;
}