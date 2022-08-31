#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    int n;

    while (cin >> n) {
        if (n == 0) {
            break;
        }

        string x, arrow, y;
        bool is_func = true, is_inv = true;
        unordered_set<string> abscissa;
        unordered_set<string> ordinate;

        for (n; n > 0; n--) {
            cin >> x >> arrow >> y;

            if (abscissa.find(x) != abscissa.end()) {
                is_func = false;
            } else {
                abscissa.insert(x);
            }

            if (ordinate.find(y) != ordinate.end()) {
                is_inv = false;
            } else {
                ordinate.insert(y);
            }
        }

        if (!is_func) {
            cout << "Not a function.\n";
        } else if (!is_inv) {
            cout << "Not invertible.\n";
        } else {
            cout << "Invertible.\n";
        }
    }

    return 0;
}