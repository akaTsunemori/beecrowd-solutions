#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void hidden_message(string text)
{
    string result = "", token;
    stringstream ss(text);

    while (getline(ss, token, ' ')) {
        if (token != "") {
            result += token[0];
        }
    }

    cout << result << '\n';
    return;
}

int main()
{
    int n;
    string a;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        getline(cin, a);
        hidden_message(a);
    }

    return 0;
}