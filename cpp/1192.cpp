#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string abc;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> abc;
        int a = (int)(abc[0]) - 48, b = (int)(abc[1]), c = (int)(abc[2]) - 48;

        if (a == c) {
            cout << a * c << '\n';
        } else if (65 <= b && b <= 90) {
            cout << c - a << '\n';
        } else {
            cout << a + c << '\n';
        }
    }

    return 0;
}