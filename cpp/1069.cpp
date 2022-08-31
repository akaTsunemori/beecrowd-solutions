#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        string str;
        getline(cin, str);
        int i, l = str.length(), a = 0, b = 0;

        for (i = 0; i < l; i++) {
            if (str[i] == '<') {
                a++;
            } else if (str[i] == '>' && a > b) {
                b++;
            }
        }

        cout << b << '\n';
    }

    return 0;
}