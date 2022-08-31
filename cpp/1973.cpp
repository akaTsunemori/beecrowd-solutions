#include <iostream>

using namespace std;

int main()
{
    int n, i, count = 0;
    long long int sum = 0;
    cin >> n;
    int stars[n];
    bool attacked[n];

    for (i = 0; i < n; i++) {
        cin >> stars[i];
        attacked[i] = false;
    }

    i = 0;

    while (i < n && i >= 0 && stars[i] > 0) {
        attacked[i] = true;

        if (stars[i] % 2 == 0) {
            stars[i--]--;
        } else {
            stars[i++]--;
        }
    }

    for (i = 0; i < n; i++) {
        sum += stars[i];

        if (attacked[i] == true) {
            count++;
        }
    }

    cout << count << ' ' << sum << '\n';
    return 0;
}