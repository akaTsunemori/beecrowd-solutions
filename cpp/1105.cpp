#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> gr;

bool check_debt()
{
    for (auto i: gr) {
        if (i.second < 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int b, n, d, c, v;
    while (cin >> b >> n) {
        if (b == 0) {
            break;
        }
        gr.clear();
        for (int i = 1; i <= b; i++) {
            cin >> gr[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> d >> c >> v;
            gr[d] -= v;
            gr[c] += v;
        }
        if (check_debt()) {
            cout << "S\n";
        }
        else {
            cout << "N\n";
        }
    }
    return 0;
}