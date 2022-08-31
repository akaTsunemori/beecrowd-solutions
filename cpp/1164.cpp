#include <iostream>
#include <cmath>

using namespace std;

void is_it_perfect(int n)
{
    int i, s = 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            s += i;
        }
    }

    if (s == n) {
        cout << n << " eh perfeito\n";
    } else {
        cout << n << " nao eh perfeito\n";
    }

    return;
}

int main()
{
    int n, p;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> p;
        is_it_prime(p);
    }

    return 0;
}