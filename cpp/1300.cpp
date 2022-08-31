#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int a;
    while (cin >> a) {
        if (a % 6 == 0) {
            cout << "Y\n";
        }
        else {
            cout << "N\n";
        }
    }
    return 0;
}