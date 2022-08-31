#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    string t;
    cin >> n;
    getchar();
    getline(cin, t);
    for (int i = 0; i < n; i++) {
        int total = 0;
        map<string, int> trees;
        while (getline(cin, t)) {
            if (t.length() == 0) {
                break;
            }
            trees[t]++;
            total++;
        }
        for (auto key: trees) {
            cout << key.first;
            printf(" %.4f\n", key.second * 100 / (float)total);
        }
        if (i < n - 1) {
            cout << '\n';
        }
    }
    return 0;
}