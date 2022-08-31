#include <iostream>
#include <string>

using namespace std;

void hamekameka(string word)
{
    int total = 0, first = 0, len = word.length(), i;
    bool flag = true;

    for (i = 0; i < len; i++) {
        if (word[i] == 'a') {
            total++;
        }

        if (flag && word[i] == 'a') {
            first++;
        }

        if (flag && word[i + 1] != 'a') {
            flag = false;
        }
    }

    cout << 'k' << string(first * (total - first), 'a') << '\n';
    return;
}

int main()
{
    int n;
    cin >> n;
    string w;

    for (n; n > 0; n--) {
        cin >> w;
        hamekameka(w);
    }

    return 0;
}