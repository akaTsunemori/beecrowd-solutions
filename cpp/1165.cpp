#include <iostream>
#include <cmath>

using namespace std;

void is_it_prime(int n)
{
    int i;

    for (i = 2; i <= floor(sqrt(n)); i++) {
        if (n % i == 0) {
            cout << n << " nao eh primo\n";
            return;
        }
    }

    cout << n << " eh primo\n";
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