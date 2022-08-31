#include <iostream>

using namespace std;

void divisors(int n)
{
    int i;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << '\n';
        }
    }

    return;
}

int main()
{
    int n;
    cin >> n;
    divisors(n);
    return 0;
}