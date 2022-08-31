#include <iostream>
#include <vector>

using namespace std;

bool sinuca(vector<int> row, int n)
{
    vector<int> new_row;

    while (n > 1) {
        n--;

        for (int i = 0; i < n; i++) {
            if (row.at(i) + row.at(i + 1) == 0) {
                new_row.push_back(1);
            } else {
                new_row.push_back(-1);
            }
        }

        row.clear();
        row.assign(new_row.begin(), new_row.end());
        new_row.clear();
    }

    return (row.at(0) == 1) ? true : false;
}

int main()
{
    int n, i, j;
    cin >> n;
    vector<int> row;

    for (i = 0; i < n; i++) {
        cin >> j;
        row.push_back(j);
    }

    if (sinuca(row, n)) {
        cout << "branca\n";
    } else {
        cout << "preta\n";
    }

    return 0;
}