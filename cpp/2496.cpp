#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (n; n > 0; n--) {
        int m, count = 0, i;
        string a, a_sorted;
        map<char, int> indexes;
        char init;
        bool result = false;
        cin >> m;
        cin >> a;
        a_sorted = a;
        sort(a_sorted.begin(), a_sorted.end());

        for (i = 0; i < m; i++) {
            indexes[a[i]] = i;
        }

        for (i = 0; i < m; i++) {
            if (a[i] != a_sorted[i]) {
                count++;
                init = a[i];
                a[i] = a[indexes[a_sorted[i]]];
                a[indexes[a_sorted[i]]] = init;
                indexes[init] = indexes[a_sorted[i]];
                indexes[a_sorted[i]] = i;
            }

            if (count > 1) {
                result = true;
                break;
            }
        }

        cout << "There are" << (result ? "n't" : "") << " the chance.\n";
    }

    return 0;
}