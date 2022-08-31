#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n, m, aux, count;
    char l;
    unordered_map<int, unordered_map<char, int>> pairs;
    while (cin >> n) {
        pairs.clear();
        count = 0;
        for (int i = 0; i < n; i++) {
            cin >> m >> l;
            pairs[m][l]++;
        }
        for (auto size: pairs) {
            aux = size.second['D'] + size.second['E'];
            aux -= abs(size.second['D'] - size.second['E']);
            count += aux / 2;
        }
        cout << count << '\n';
    }
    return 0;
}