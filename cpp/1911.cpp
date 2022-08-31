#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void help_girafales(map<string, string> signatures, vector<pair<string, string>> attendance, int l)
{
    int fake_signatures = 0, count = 0, i, j;
    string name, signature, correct_signature;

    for (i = 0; i < l; i++) {
        count = 0;
        name = attendance[i].first, signature = attendance[i].second;

        if (signatures.find(name) != signatures.end()) {
            for (j = 0; j < signature.length(); j++) {
                correct_signature = signatures.find(name)->second;

                if (signature[j] != correct_signature[j]) {
                    count++;
                }
            }

            if (count > 1) {
                fake_signatures++;
            }
        }
    }

    cout << fake_signatures << '\n';
    return;
}

int main()
{
    int n, m, i;
    string name, signature;

    while (true) {
        cin >> n;

        if (n == 0) {
            break;
        }

        map<string, string> signatures;
        vector<pair<string, string>> attendance;
        pair<string, string> p;

        for (i = 0; i < n; i++) {
            cin >> name >> signature;
            signatures[name] = signature;
        }

        cin >> m;

        for (i = 0; i < m; i++) {
            cin >> p.first >> p.second;
            attendance.push_back(p);
        }

        help_girafales(signatures, attendance, i);
    }

    return 0;
}