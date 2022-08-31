#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sort_criteria(const vector<int> &a, 
                    const vector<int> &b)
{
    if (a.at(0) != b.at(0)) {
        return (a.at(0) > b.at(0));
    }
    if ((float)a.at(1) / a.at(2) + (a.at(2) == 0) != (float)b.at(1) / b.at(2) + (b.at(2) == 0)) {
        return ((float)a.at(1) / a.at(2) + (a.at(2) == 0) > (float)b.at(1) / b.at(2) + (b.at(2) == 0));
    }
    if (a.at(1) != b.at(1)) {
        return (a.at(1) > b.at(1));
    }
    return (a.at(3) < b.at(3));
}

int main()
{
    int count = 1;

    while (true) {
        int n, x, y, z, w, i;
        cin >> n;
        vector<vector<int>> results;
        vector<int> aux(4, 0);
        for (i = 0; i < n; i++) {
            results.push_back(aux);
        }
        if (n == 0) {
            break;
        }
        if (count > 1) {
            cout << '\n';
        }
        for (i = 0; i < (n * (n - 1)) / 2; i++) {
            cin >> x >> y >> z >> w;
            if (y > w) {
                results.at(x - 1).at(0) += 2;
                results.at(z - 1).at(0)++;
            } else {
                results.at(x - 1).at(0)++;
                results.at(z - 1).at(0) += 2;
            }
            results.at(x - 1).at(1) += y;
            results.at(x - 1).at(2) += w;
            results.at(z - 1).at(1) += w;
            results.at(z - 1).at(2) += y;
            results.at(x - 1).at(3) = x;
            results.at(z - 1).at(3) = z;
        }
        sort(results.begin(), results.end(), sort_criteria);
        cout << "Instancia " << count << '\n';
        for (i = 0; i < n - 1; i++) {
            cout << results.at(i).at(3) << ' ';
        }
        cout << results.at(i).at(3) << '\n';
        count++;
    }

    return 0;
}