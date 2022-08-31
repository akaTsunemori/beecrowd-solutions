#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    int n, a, b;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> a >> b;
        cout << gcd(a, b) << '\n';
    }

    return 0;
}