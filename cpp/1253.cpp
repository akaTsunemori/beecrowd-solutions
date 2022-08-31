#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, shift, len, new_i;
    string caesar;
    cin >> n;

    for (n; n > 0; n--) {
        getchar();
        getline(cin, caesar);
        len = caesar.length();
        cin >> shift;

        for (int i = 0; i < len; i++) {
            new_i = (int)(caesar[i]) - shift;

            if (new_i < 65) {
                new_i += 26;
            } else if (90 < new_i) {
                new_i -= 26;
            }

            caesar[i] = (char)(new_i);
        }

        cout << caesar << '\n';
    }

    return 0;
}