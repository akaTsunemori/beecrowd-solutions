#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int main()
{
    while (true) {
        int n, b, i, j;
        cin >> n >> b;

        if (n == 0 && b == 0) {
            break;
        }

        int bag[b];
        set<int> calls;

        for (i = 0; i < b; i++) {
            cin >> bag[i];
        }

        for (i = 0; i < b; i++) {
            for (j = i; j < b; j++) {
                calls.insert(abs(bag[i] - bag[j]));
            }
        }

        if (calls.size() >= n + 1) {
            cout << 'Y' << '\n';
        } else {
            cout << 'N' << '\n';
        }
    }

    return 0;
}