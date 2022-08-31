#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void starting_grid(int n, vector<int> &start, vector<int> &finish)
{
    int overtakes = 0, i, p;
    auto pos = start.begin();

    for (i = 0; i < n; i++) {
        if (start.at(i) != finish.at(i)) {
            pos = find(start.begin(), start.end(), finish[i]);

            if (pos != start.end()) {
                p = pos - start.begin();
            }

            overtakes += p - i;
            start.erase(pos);
            start.insert(start.begin() + i, finish[i]);
        }
    }

    cout << overtakes << '\n';
}

int main()
{
    int n, i, p;

    while (cin >> n) {
        vector<int> start;
        vector<int> finish;

        for (i = 0; i < n; i++) {
            cin >> p;
            start.push_back(p);
        }

        for (i = 0; i < n; i++) {
            cin >> p;
            finish.push_back(p);
        }

        starting_grid(n, start, finish);
    }

    return 0;
}