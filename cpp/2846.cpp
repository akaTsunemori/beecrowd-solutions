#include <iostream>

using namespace std;

int fibonot(int n)
{
    int a = 0, b = 1, count = 1, f, i, j;

    for (i = 2; count < n; i++) {
        b = b + a;
        a = b - a;

        for (j = a + 1; j < b && count < n; j++) {
            f = j;
            count++;
        }
    }

    return f;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonot(n + 1) << '\n';
    return 0;
}