#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> last_2_days;
    int q, e, n;
    cin >> q >> e;

    for (e; e > 0; e--) {
        cin >> n;
        last_2_days.insert(n);
    }

    for (q; q > 0; q--) {
        cin >> n;
        if (last_2_days.find(n) != last_2_days.end()) {
            cout << 0 << '\n';
        } else {
            cout << 1 << '\n';
            last_2_days.insert(n);
        }
    }

    return 0;
}