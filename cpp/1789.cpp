#include <iostream>

using namespace std;

int main()
{
    int n;

    while (cin >> n) {
        int vel, max = 0;

        for (n; n > 0; n--) {
            cin >> vel;
            if (max < vel) max = vel;
        }

        if (max < 10) {
            cout << 1 << '\n';
        } else if (max < 20) {
            cout << 2 << '\n';
        } else {
            cout << 3 << '\n';
        }
    }

    return 0;
}