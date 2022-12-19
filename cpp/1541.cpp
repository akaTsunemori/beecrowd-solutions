#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    while (cin >> a) {
        if (a == 0) {
            break;
        }
        cin >> b >> c;
        cout << (int)sqrt((double)(a * b * 100) / c) << '\n';
    }
    return 0;
}