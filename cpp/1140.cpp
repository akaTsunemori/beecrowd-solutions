#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string sentence, word;
    bool flag = true;
    char chr;

    while (true) {
        getline(cin, sentence);

        if (sentence == "*") {
            break;
        }

        chr = tolower(sentence[0]);
        stringstream ss(sentence);

        while (getline(ss, word, ' ')) {
            if (tolower(word[0]) != chr) {
                flag = false;
                break;
            }
        }

        cout << (flag ? "Y\n" : "N\n");
        flag = true;
    }

    return 0;
}