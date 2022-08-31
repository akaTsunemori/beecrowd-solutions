#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    for (a += 1; a < b; a++) {
        if (a % 5 == 2 || a % 5 == 3) {
            cout << a << endl;
        }
    }

    return 0;
}