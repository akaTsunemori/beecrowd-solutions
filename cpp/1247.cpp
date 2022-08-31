#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d, vf, vg;

    while (cin >> d) {
        cin >> vf;
        cin >> vg;

        if (static_cast<float>(vg) / sqrt(144 + d * d) >= static_cast<float>(vf) / 12) {
            cout << 'S' << endl;
        } else {
            cout << 'N' << endl;
        }
    }

    return 0;
}