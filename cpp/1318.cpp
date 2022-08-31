#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    unordered_map<int, int> frequencies;
    vector<int> tickets;
    int n, m, aux, count = 0;
    while (cin >> n >> m) {
        if (n == 0) {
            break;
        }
        for (int i = 0; i < m; i++) {
            cin >> aux;
            tickets.push_back(aux);
        }
        for (int i: tickets) {
            frequencies[i]++;
        }
        for (pair<const int, int> i: frequencies) {
            if (i.second > 1) {
                count++;
            }
        }
        cout << count << '\n';
        frequencies.clear();
        tickets.clear();
        count = 0;
    }
    return 0;
}