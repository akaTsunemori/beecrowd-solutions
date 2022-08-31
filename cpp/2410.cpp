#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> freq;
    int n, i, p;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> p;
        freq.insert(p);
    }

    cout << freq.size() << '\n';
    return 0;
}