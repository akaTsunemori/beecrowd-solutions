#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string strip(string str)
{
    stringstream ss(str);
    string token, result = "";

    while (getline(ss, token, ' ')) {
        if (token != "") {
            result += token + ' ';
        }
    }

    result.pop_back();
    return result;
}

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

        getchar();
        string s[n], line;

        for (i = 0; i < n; i++) {
            getline(cin, line);
            line = strip(line);
            s[i] = line;

            if (m < s[i].length()) {
                m = s[i].length();
            }
        }

        justifier(s, n, m);
        flag = true;
    }

    return 0;
}