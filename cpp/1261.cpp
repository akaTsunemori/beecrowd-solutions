#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, int> hay_point;
    int i, m, n, salary;
    cin >> m >> n;
    string role, word;

    while (m > 0) {
        cin >> role >> salary;
        hay_point[role] = salary;
        m--;
    }

    int employee[n] = {0}, index = 0;

    while (index != n) {
        cin >> word;

        if (word == ".") {
            index++;
        } else {
            if (hay_point.find(word) != hay_point.end()) {
                employee[index] += hay_point[word];
            }
        }
    }

    for (i = 0; i < n; i++) {
        cout << employee[i] << '\n';
    }

    return 0;
}