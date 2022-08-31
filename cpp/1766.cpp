#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

bool sort_criteria(const tuple<string, int, int, float> &a,
                   const tuple<string, int, int, float> &b)
{
    if (get<1>(a) != get<1>(b)) return (get<1>(a) > get<1>(b));
    if (get<2>(a) != get<2>(b)) return (get<2>(a) < get<2>(b));
    if (get<3>(a) != get<3>(b)) return (get<3>(a) < get<3>(b));
    return (get<0>(a) < get<0>(b));
}

int main()
{
    int t, c;
    cin >> t;

    for (c = 1; c <= t; c++) {
        int n, m;
        cin >> n >> m;
        vector<tuple<string, int, int, float>> names;

        for (n; n > 0; n--) {
            string s;
            int p, i;
            float a;
            cin >> s >> p >> i >> a;
            names.push_back(make_tuple(s, p, i, a));
        }

        sort(names.begin(), names.end(), sort_criteria);
        cout << "CENARIO {" << c << "}\n";
        int j = 1;

        for (auto name: names) {
            cout << j << " - " << get<0>(name) << '\n';
            j++;
            if (j > m) break;
        }
    }

    return 0;
}