#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void is_it_prime(int n)
{
    int i = 0, m = floor(sqrt(n)) + 1;

    for (i = 2; i < m; i++) {
        if (n % i == 0) {
            cout << "Not Prime\n";
            return;
        }
    }

    cout << "Prime\n";
    return;
}

int main()
{
    int i, n;
    cin >> i;

    for (i; i > 0; i--) {
        cin >> n;
        is_it_prime(n);
    }

    return 0;
}