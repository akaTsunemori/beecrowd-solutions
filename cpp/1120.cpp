#include <iostream>
#include <string>

using namespace std;

int main()
{
    while(true) {
        string n, r = "", r_2 = "";
        char d;
        int i;
        cin >> d;
        cin >> n;

        if (d == '0' && n == "0") {
            break;
        }

        for (i = 0; i < n.length(); i++) {
            if (n[i] != d) {
                r += n[i];
            }
        }

        for (i = 0; i < r.length(); i++) {
            if (r[i] != '0') {
                break;
            }
        }

        for (i; i < r.length(); i++) {
                r_2 += r[i];
        }

        if (r_2.length() == 0) {
            cout << 0 << endl;
        } else {
            for (i = 0; i < r_2.length(); i++) {
                cout << r_2[i];
            }

            cout << endl;
        }   
    }

    return 0;
}