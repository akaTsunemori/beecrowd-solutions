#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    long long int n, m;

    while (cin >> n) {
        if (n == 0) break;

        unordered_map<long long int, int> frequencies;

        for (n; n > 0; n--) {
            cin >> m;
            frequencies[m]++;
        }

        for (auto k: frequencies) {
            if (k.second % 2 != 0) {
                m = k.first;
                break;
            }
        }

        cout << m << '\n';
    }

    return 0;
}