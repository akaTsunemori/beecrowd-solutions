#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool sort_criteria(const pair<string, int> &a,
                    const pair<string, int> &b)
{
    if (a.second == b.second) {
        return (a.first < b.first);
    }

    return (a.second > b.second);
}

int main()
{
    int m, n, age, team = 0;
    cin >> n;
    string name;
    vector<pair<string, int>> gnomes;
    vector<vector<pair<string, int>>> teams(n / 3);

    for (m = 0; m < n; m++) {
        cin >> name >> age;
        gnomes.push_back(make_pair(name, age));
    }

    sort(gnomes.begin(), gnomes.end(), sort_criteria);

    for (auto gnome: gnomes) {
        team = (team >= n / 3) ? 0 : team;
        teams.at(team).push_back(gnome);
        team++;
    }

    team = 1;

    for (auto t: teams) {
        cout << "Time " << team << '\n' ;
        team++;

        for (auto player: t) {
            cout << player.first << ' ' << player.second << '\n';
        }

        cout << '\n';
    }

    return 0;
}