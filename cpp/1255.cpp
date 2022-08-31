#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        int alphabet[26] = {0}, len, max = 0, i, j;
        string sentence, result = "";
        getline(cin, sentence);
        len = sentence.length();

        for (i = 0; i < len; i++) {
            if (isalpha(sentence[i])) {
                j = (int)(tolower(sentence[i])) - 97;
                alphabet[j]++;

                if (max < alphabet[j]) {
                    max = alphabet[j];
                }
            }
        }

        for (i = 0; i < 26; i++) {
            if (alphabet[i] == max) {
                result += (char)(i + 97);
            }
        }

        cout << result << '\n';
    }

    return 0;
}