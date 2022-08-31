#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int m = 0;

bool sort_criteria(const int &a, const int &b)
{
    if (a % m == b % m) {
        if (a % 2 == 0 && b % 2 == 0) {
            return (a < b);
        } else if (a % 2 != 0 && b % 2 != 0) {
            return (a > b);
        } else {
            if (a % 2 == 0) {
                return false;
            } else {
                return true;
            }
        }
    } else {
        return (a % m < b % m);
    }
}

int main()
{
    int n, i, aux;

    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            cout << "0 0\n";
            break;
        }

        vector<int> values;

        for (i = 0; i < n; i++) {
            cin >> aux;
            values.push_back(aux);
        }

        sort(values.begin(), values.end(), sort_criteria);
        cout << n << ' ' << m << '\n';

        for (auto j: values) {
            cout << j << '\n';
        }
    }

    return 0;
}