#include <iostream>

using namespace std;

int main()
{
    int n, s, r, o, i;
    cin >> n >> s;
    r = s;

    for (i = 0; i < n; i++) {
        cin >> o;
        s += o;

        if (r > s) {
            r = s;
        }
    }

    cout << r << '\n';
    return 0;
}