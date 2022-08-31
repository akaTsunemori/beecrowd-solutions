#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numbers[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, total = 0, n, len, i;
    cin >> n;

    for (n; n > 0; n--) {
        string number;
        cin >> number;
        len = number.length();

        for (i = 0; i < len; i++) {
            total += numbers[ (int)(number[i]) - 48 ];
        }

        cout << total << " leds" << '\n';
        total = 0;
    }

    return 0;
}