#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    
    while (n != 0) {
        int mag[n], peaks = 0;

        for (i = 0; i < n; i++) {
            cin >> mag[i];
        }

        n--;

        for (i = 1; i < n; i++) {
            if ((mag[i - 1] < mag[i] && mag[i] > mag[i + 1]) || (mag[i - 1] > mag[i] && mag[i] < mag[i + 1])) {
                peaks++;
            }
        }

        if ((mag[n - 1] < mag[n] && mag[n] > mag[0]) || (mag[n - 1] > mag[n] && mag[n] < mag[0])) {
            peaks++;
        }

        if ((mag[n] < mag[0] && mag[0] > mag[1]) || (mag[n] > mag[0] && mag[0] < mag[1])) {
            peaks++;
        }

        cout << peaks << '\n';
        cin >> n;
    }

    return 0;
}