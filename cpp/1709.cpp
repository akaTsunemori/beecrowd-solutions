#include <iostream>

using namespace std;

int main()
{
    int half, count = 1, start = 1, position = 1;
    cin >> half;
    half /= 2;

    while (position != 0) {
        if (start < half) {
            position = start;
            start = 2 * position + 1;
        } else {
            position = start - half;
            start = 2 * position;
        }

        count++;
    }

    cout << count << '\n';
    return 0;
}