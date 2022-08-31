#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, count, steps, i, j;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> m;
        count = 0;
        pair<int, int> positions[m];
        pair<int, bool> visited[m];

        for (i = 0; i < m; i++) {
            positions[i].first = i;
            cin >> positions[i].second;
            visited[i].first = i;
            visited[i].second = false;
        }

        sort(positions, positions + m,
        [](const pair<int, int> &a, const pair<int, int> &b)
        {
            return (a.second < b.second);
        });

        for (i = 0; i < m; i++) {
            if (visited[i].second || positions[i].first == i) {
                continue;
            }

            steps = 0;
            j = i;

            while (!visited[j].second) {
                visited[j].second = true;
                j = positions[j].first;
                steps++;
            }

            if (steps > 0) {
                count += steps - 1;
            }
        }

        cout << count << '\n';
    }

    return 0;
}