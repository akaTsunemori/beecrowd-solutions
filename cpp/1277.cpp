#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++) {
        int len, j, k, l = 0;
        cin >> len;
        string names[len], frequency[len], notFrequentEnough[len];

        for (j = 0; j < len; j++) {
            cin >> names[j];
        }

        for (j = 0; j < len; j++) {
            cin >> frequency[j];
        }

        for (j = 0; j < len; j++) {
            int present = 0, absent = 0;

            for (k = 0; k < frequency[j].length(); k++) {
                if (frequency[j][k] == 'P') {
                    present += 1;
                } else if (frequency[j][k] == 'A') {
                    absent += 1;
                }
            }

            if (static_cast<float>(present) / (present + absent) < 0.75) {
                notFrequentEnough[l] = names[j];
                l += 1;
            }
        }

        for (j = 0; j < l - 1; j++) {
            cout << notFrequentEnough[j] << ' ';
        }

        cout << notFrequentEnough[j] << endl;
    }

    return 0;
}