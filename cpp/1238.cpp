#include <iostream>
#include <string>

using namespace std;

void combiner(string s1, string s2)
{
    int s1_len = s1.length(), s2_len = s2.length(), i;
    string result = "";
    bool flag = false;

    if (s1_len > s2_len) {
        s1_len = s1_len + s2_len;
        s2_len = s1_len - s2_len;
        s1_len = s1_len - s2_len;
        flag = true;
    }

    for (i = 0; i < s1_len; i++) {
        result += s1[i];
        result += s2[i];
    }

    if (flag) {
        s2 = s1;
    }

    for (i; i < s2_len; i++) {
        result += s2[i];
    }

    cout << result << '\n';
    return;
}

int main()
{
    int n;
    string a, b;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> a >> b;
        combiner(a, b);
    }

    return 0;
}