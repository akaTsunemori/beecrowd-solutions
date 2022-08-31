#include <iostream>
#include <string>
#include <set>

using namespace std;

bool is_alpha(char c)
{
    if (('a' <= c && c <= 'z') or ('A' <= c && c <= 'Z')) {
        return true;
    }

    return false;
}

int main()
{
    int i;
    string line, word = "";
    set<string> dict;

    while (getline(cin, line)) {
        for (i = 0; i < line.length(); i++) {
            if (is_alpha(line[i])) {
                word.push_back(tolower(line[i]));
            } else if (word.length() > 0) {
                dict.insert(word);
                word = "";
            } else {
                word = "";
            }
        }

        if (word.length() > 0) {
            dict.insert(word);
            word = "";
        }
    }

    for (auto k: dict) {
        cout << k << "\n";
    }

    return 0;
}