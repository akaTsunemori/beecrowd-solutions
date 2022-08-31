#include <iostream>

using namespace std;

int main()
{
    int gre = 0, pos = 0, n, i;

    for (i = 0; i < 100; i++) {
        cin >> n;

        if (gre < n) {
            gre = n;
            pos = i + 1;
        }
    }

    cout << gre << '\n';
    cout << pos << '\n';
    return 0;
}