#include <iostream>
#include <string>

using namespace std;

void justifier(string s[], int s_len, int max_len)
{
    int i;

    for (i = 0; i < s_len; i++) {
        if (s[i].length() < max_len) {
            cout << string(max_len - s[i].length(), ' ') << s[i] << '\n';
        } else {
            cout << s[i] << '\n';
        }
    }

    return;
}

int main()
{
    bool flag = false;

    while (true) {
        int n, i, m = 0;
        cin >> n;

        if (n == 0) {
            break;
        }

        if (flag) {
            cout << '\n';
        }

        string s[n], line;

        for (i = 0; i < n; i++) {
            cin >> s[i];

            if (m < s[i].length()) {
                m = s[i].length();
            }
        }

        justifier(s, n, m);
        flag = true;
    }

    return 0;
}