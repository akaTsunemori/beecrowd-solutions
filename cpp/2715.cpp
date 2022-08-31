#include <iostream>

using namespace std;

int main() {
    int length;

    while (scanf("%d", &length) != EOF) {
        long long int a = 0, b = 0, c = 0, result = 10000000;
        int difficulties[length], i;
        
        for (i = 0;  i < length; i++) {
            cin >> difficulties[i];
        }

        for (i = 0; i < length; i++) {
            b += difficulties[i];
        }

        for (i = 0; i < length; i++) {
            a += difficulties[i];
            b -= difficulties[i];
            c = (a > b) ? a - b : b - a;

            if (c < result) {
                result = c;
            }
        }

        cout << result << endl;
    }

    return 0;
}