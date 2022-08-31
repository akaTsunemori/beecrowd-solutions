#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool sort_criteria(const string a, const string b)
{
    if (a[1] == b[1]) {
        return (a[0] > b[0]);
    }

    return (a[1] > b[1]);
}

int main()
{
    int n, m, i, j;
    string aux;
    vector<string> matrix;
    cin >> n >> m;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> aux;
            matrix.push_back(aux);
        }
    }

    sort(matrix.begin(), matrix.end(), sort_criteria);

    for (auto element: matrix) {
        cout << element << '\n';
    }

    return 0;
}