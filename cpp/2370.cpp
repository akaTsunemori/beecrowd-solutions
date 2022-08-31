#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

bool sortbysecdesc(const pair<string, int> &a, const pair<string, int> &b)
{
    return a.second > b.second;
}

int main()
{
    int n, t, i;
    cin >> n >> t;
    pair<string, int> p;
    vector<pair<string, int>> players;

    for (i = 0; i < n; i++) {
        cin >> p.first >> p.second;
        players.push_back(p);
    }

    sort(players.begin(), players.end(), sortbysecdesc);
    int count = 1;
    map<int, vector<string>> teams;

    for (i = 0; i < n; i++) {
        teams[count].push_back(players[i].first);
        count++;

        if (count > t) {
            count = 1;
        }
    }

    for (auto const &pair: teams) {
        auto names = pair.second;
        sort(names.begin(), names.end());
        teams[pair.first] = names;
    }

    for (auto const &pair: teams) {
        cout << "Time " << pair.first << '\n';

        for (auto const &element: pair.second) {
            cout << element << '\n';
        }

        cout << '\n';
    }

    return 0;
}