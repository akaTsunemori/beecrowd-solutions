#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string word, tmp, ob = "OB", ur = "UR", result = "";
    bool flag = false;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> word;

        if (word.length() == 3) {
            tmp = word;
            tmp.pop_back();
            flag = true;
        }

        if (flag && (tmp == ob || tmp == ur)) {
            word[2] = 'I';
        }

        flag = false;
        result += word + ' ';
    }

    result.pop_back();
    cout << result << '\n';
    return 0;
}