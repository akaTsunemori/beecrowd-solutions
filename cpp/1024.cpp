#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, i, len;
    string sentence;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        getline(cin, sentence);
        len = sentence.length();

        for (i = 0; i < len; i++) {
            if (isalpha(sentence[i])) {
                sentence[i] = (char)((int)(sentence[i]) + 3);
            }
        }

        reverse(sentence.begin(), sentence.end());

        for (i = floor(len / 2); i < len; i++) {
            sentence[i] = (char)((int)(sentence[i]) - 1);
        }

        cout << sentence << '\n';
    }

    return 0;
}