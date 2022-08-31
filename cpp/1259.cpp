#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> even;
    vector<int> odd;
    int n, number;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> number;

        if (number % 2 == 0) {
            even.push_back(number);
        } else {
            odd.push_back(number);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());

    for (auto i: even) {
        cout << i << '\n';
    }

    for (auto i: odd) {
        cout << i << '\n';
    }

    return 0;
}