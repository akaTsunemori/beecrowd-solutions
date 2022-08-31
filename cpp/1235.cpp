#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void inside_out(string sentence)
{
    int len = sentence.length(), i;
    int half = floor(len / 2);
    string result = "";

    for (i = half - 1; i >= 0; i--) {
        result += sentence[i];
    }

    for (i = len - 1; i >= half; i--) {
        result += sentence[i];
    }

    cout << result << '\n';
    return;
}

int main()
{
    int n;
    string s;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        getline(cin, s);
        inside_out(s);
    }

    return 0;
}