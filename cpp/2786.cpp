#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << a * b + (a - 1) * (b - 1) << '\n';
    cout << (a - 1) * 2 + (b - 1) * 2 << '\n';
    return 0;
}