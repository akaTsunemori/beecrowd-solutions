#include <iostream>

using namespace std;

int solution(int arr[], int r, int k)
{
    int i, j;
    bool ks[k + 1] = {false};
    ks[0] = true;
    for (i = 0; i < r; i++) {
        for (j = k; j > arr[i] - 1; j--) {
            if (ks[j - arr[i]]) {
                ks[j] = true;
            }
        }
    }
    return ks[k];
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int r, k, a, b, i;
    while (cin >> r >> k) {
        int freqs[r] = {0};
        for (i = 0; i < k; i++) {
            cin >> a >> b;
            freqs[--a]++;
            freqs[--b]++;
        }
        if (solution(freqs, r, k)) {
            cout << "S\n";
        } else {
            cout << "N\n";
        }
    }
    return 0;
}