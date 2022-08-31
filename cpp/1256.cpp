#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int m;
    cin >> m;
    bool flag = false;

    for (m; m > 0; m--) {
        int c, n, key, i;
        cin >> c >> n;
        map<int, vector<int>> mod;

        if (flag) {
            cout << '\n';
        }

        for (i = 0; i < n; i++) {
            cin >> key;
            mod[key % c].push_back(key);
        }

        for (i = 0; i < c; i++) {
            cout << i << " -> ";

            if (mod.find(i) != mod.end()) {
                for (auto j: mod.at(i)) {
                    cout << j << " -> ";
                }
            }

            cout << "\\" << '\n';
        }

        flag = true;
    }

    return 0;
}