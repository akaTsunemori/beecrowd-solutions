#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

vector<string> split(string str)
{
    vector<string> result;
    stringstream ss(str);
    string tok;

    while (getline(ss, tok, ' ')) {
        result.push_back(tok);
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    for (t; t > 0; t--) {
        map<string, string> jp_pt;
        vector<string> verse;
        string key, value, line;
        int m, n, i, j;
        cin >> m >> n;
        getchar();

        for (i = 0; i < m; i++) {
            getline(cin, key);
            getline(cin, value);
            jp_pt[key] = value;
        }

        for (i = 0; i < n; i++) {
            getline(cin, line);
            verse = split(line);

            for (j = 0; j < verse.size(); j++) {
                if (jp_pt.find(verse.at(j)) != jp_pt.end()) {
                    verse.at(j) = jp_pt.find(verse.at(j))->second;
                }
            }

            for (j = 0; j < verse.size() - 1; j++) {
                cout << verse.at(j) << ' ';
            }
            cout << verse.at(j) << '\n';
        }

        cout << '\n';
    }

    return 0;
}