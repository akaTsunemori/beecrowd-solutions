#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        string str, word;
        getline(cin, str);
        int len;
        stringstream ss(str);
        unordered_map<int, string> map;
        set<int> set;

        while (ss >> word) {
            len = word.length();

            if (map.find(len) == map.end()) {
                map[len] = word;
                set.insert(len);
            } else {
                map[len] += ' ' + word;
            }
        }

        auto i = set.rbegin();

        for (i; next(i) != set.rend(); i++) {
            cout << map[*i] << ' ';
        }

        cout << map[*i] << '\n';
    }

    return 0;
}