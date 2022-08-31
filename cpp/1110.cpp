#include <iostream>
#include <vector>

using namespace std;

void stack(int n)
{
    vector<int> a, b;
    int i;

    for (i = 1; i <= n; i++) {
        a.push_back(i);
    }

    while (n > 1) {
        b.push_back(a.at(0));
        a.erase(a.begin());
        a.push_back(a.at(0));
        a.erase(a.begin());
        n--;
    }

    n = b.size();
    n--;
    cout << "Discarded cards: ";

    for (i = 0; i < n; i++) {
        cout << b.at(i) << ", ";
    }

    cout << b.at(i) << "\n";
    cout << "Remaining card: " << a.at(0) << '\n';
}

int main()
{
    int n;

    while (true) {
        cin >> n;
        if (n == 0) break;
        stack(n);
    }

    return 0;
}