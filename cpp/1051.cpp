#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float s;
    bool flag = true;
    cin >> s;
    s -= 2000;

    if (s <= 0) {
        cout << "Isento\n";
        flag = false;
    } else if (s <= 1000) {
        s *= 0.08;
    } else if (s <= 2500) {
        s = 0.08 * 1000 + 0.18 * (s - 1000);
    } else {
        s = 0.08 * 1000 + 0.18 * 1500 + 0.28 * (s - 2500);
    }

    if (flag) {
        printf("R$ %.2f\n", s);
    }

    return 0;
}