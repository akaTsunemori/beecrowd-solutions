#include <iostream>

using namespace std;

int main() {
    while (true) {
        int n, i;
        cin >> n;

        if (n == 0) {
            break;
        }

        int gifts[2 * n], sums[n];
        int i_a = 0, i_d = (2 * n) - 1;

        for (i = 0; i < 2 * n; i++) {
            cin >> gifts[i];
        }

        while (i_a < n) {
            sums[i_a] = gifts[i_a] + gifts[i_d];
            i_a++;
            i_d--;
        }

        int max = 0, min = 1000000000;

        for (i = 0; i < n; i++) {
            if (sums[i] > max) {
                max = sums[i];
            }

            if (sums[i] < min) {
                min = sums[i];
            }
        }

        cout << max << " " << min << endl;
    }
}