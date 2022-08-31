#include <iostream>

using namespace std;

void dancing_sentence(string sentence)
{
    int len = sentence.length(), count = 0, i;

    for (i = 0; i < len; i++) {
        if (sentence[i] != ' ') {
            if (count % 2 == 0) {
                sentence[i] = toupper(sentence[i]);
            } else {
                sentence[i] = tolower(sentence[i]);
            }

            count++;
        }
    }

    cout << sentence << '\n';
    return;
}

int main()
{
    string s;

    while (getline(cin, s)) {
        dancing_sentence(s);
    }

    return 0;
}