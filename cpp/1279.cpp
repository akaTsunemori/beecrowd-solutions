#include <iostream>
#include <string>
#include <tuple>

using namespace std;

tuple<bool, bool, bool, bool, bool> check_divisibility(string s)
{
    int i, mod_4 = 0, mod_15 = 0, mod_55 = 0, mod_100 = 0, mod_400 = 0;

    for (i = 0; i < s.length(); i++) {
        mod_4   = (10 * mod_4   + (int)(s[i]) - 48) % 4;
        mod_15  = (10 * mod_15  + (int)(s[i]) - 48) % 15;
        mod_55  = (10 * mod_55  + (int)(s[i]) - 48) % 55;
        mod_100 = (10 * mod_100 + (int)(s[i]) - 48) % 100;
        mod_400 = (10 * mod_400 + (int)(s[i]) - 48) % 400;
    }

    return make_tuple(mod_4 == 0, mod_15 == 0, mod_55 == 0, mod_100 == 0, mod_400 == 0);
}

int main()
{
    int i;
    bool flag = false;
    string n;

    while (cin >> n) {
        if (flag) {
            cout << '\n';
        }

        bool a = false, b = false, c = false;
        bool mod_4, mod_15, mod_55, mod_100, mod_400;
        tie(mod_4, mod_15, mod_55, mod_100, mod_400) = check_divisibility(n);

        if (mod_15) {
            b = true;
        }

        if ((mod_4 && !mod_100) || (mod_400)) {
            a = true;

            if (mod_55) {
                c = true;
            }
        }

        if (!a && !b && !c) {
            cout << "This is an ordinary year.\n";
        } else {
            if (a) {
                cout << "This is leap year.\n";
            }

            if (b) {
                cout << "This is huluculu festival year.\n";
            }

            if (c) {
                cout << "This is bulukulu festival year.\n";
            }
        }

        flag = true;
    }

    return 0;
}