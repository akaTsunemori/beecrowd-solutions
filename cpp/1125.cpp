#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    int g, p, s, i, j;

    while (true) {
        cin >> g >> p;

        if (g == 0 && p == 0) {
            break;
        }

        vector<vector<int>> results;
        string r, aux;
        getchar();

        for (i = 0; i < g; i++) {
            getline(cin, r);
            stringstream ss(r);
            vector<int> result;

            while (ss >> aux) {
                result.push_back(stoi(aux));
            }

            results.push_back(result);
        }

        cin >> s;
        getchar();

        while (s > 0) {
            int points[p] = {0};
            vector<int> system;

            string str;
            getline(cin, str);
            stringstream ss(str);

            while (ss >> aux) {
                system.push_back(stoi(aux));
            }

            for (i = 0; i < g; i++) {
                for (j = 0; j < p; j++) {
                    if (results[i][j] <= system.at(0)) {
                        points[j] += system.at(results[i][j]);
                    }
                }
            }

            vector<int> winners;
            int max = 0;

            for (i = 0; i < p; i++) {
                if (points[i] > max) {
                    max = points[i];
                }
            }

            for (i = 0; i < p; i++) {
                if (points[i] == max) {
                    winners.push_back(i + 1);
                }
            }

            for (i = 0; i < winners.size() - 1; i++) {
                cout << winners.at(i) << ' ';
            }

            cout << winners.at(i) << '\n';
            s--;
        }
    }

    return 0;
}