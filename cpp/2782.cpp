#include <iostream>

using namespace std;

int main()
{
    int n, i, stepladders = 1;
    cin >> n;
    int sequence[n];

    for (i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    for (i = 1; i < n - 1; i++) {
        if (sequence[i] - sequence[i - 1] != sequence[i + 1] - sequence[i]) {
            stepladders++;
        }
    }

    cout << stepladders << '\n';
    return 0;
}