#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    for (i = n - 1; i > 0; i--) {
        n *= i;
    }

    cout << n << '\n';
    return 0;
}