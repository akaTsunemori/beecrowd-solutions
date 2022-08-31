#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, count = 0;
    cin >> a >> b >> c;

    while (true) {
        if (a + b == c || a == b || abs(a - b) == c) {
            cout << "S\n";
            break;
        } else if (count == 3) {
            cout << "N\n";
            break;
        }

        a = a + c;
        c = a - c;
        a = a - c;
        a = a + b;
        b = a - b;
        a = a - b;
        count++;
    }

    return 0;
}