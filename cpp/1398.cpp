#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n = "", m;

    while (getline(cin, m)) {
        if (m.back() == '#') {
            n += m;
            int i, decimal = 0;

            for (i = 0; n[i] != '#'; i++) {
                if (n[i] == '1') {
                    decimal = (2 * decimal + 1) % 131071;
                }
            }

            cout << ((decimal == 0 ? "YES" : "NO")) << endl;
            n = "";
        } else {
            n += m;
        }
    }

    return 0;
}