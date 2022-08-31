#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

bool sort_criteria(const tuple<string, char, int> &a,
                    const tuple<string, char, int> &b)
{
    if (get<2>(a) != get<2>(b)) return get<2>(a) < get<2>(b);
    if (get<1>(a) != get<1>(b)) return get<1>(a) < get<1>(b);
    return (get<0>(a) < get<0>(b));
}

int main()
{
    int n;

    while (cin >> n) {
        string name;
        char direction;
        int distance;
        vector<tuple<string, char, int>> entries;

        for (n; n > 0; n--) {
            cin >> name >> direction >> distance;
            entries.push_back(make_tuple(name, direction, distance));
        }
        
        sort(entries.begin(), entries.end(), sort_criteria);

        for (auto i: entries) {
            cout << get<0>(i) << '\n';
        }
    }

    return 0;
}