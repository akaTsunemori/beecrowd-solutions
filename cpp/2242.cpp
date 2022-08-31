#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string huehue, euheuh;
    cin >> huehue;
    int i = 0, len = huehue.length();

    while (i < len) {
        if (huehue[i] == 'a' || huehue[i] == 'e' || huehue[i] == 'i' || huehue[i] == 'o' || huehue[i] == 'u') {
            i++;
        } else {
            huehue.erase(i, 1);
            len--;
        }
    }

    euheuh = huehue;
    reverse(euheuh.begin(), euheuh.end());

    if (huehue == euheuh) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }

    return 0;
}