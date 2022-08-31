#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();
    map<string, char> morse_map {
        {"=.===", 'a'},
        {"===.=.=.=", 'b'},
        {"===.=.===.=", 'c'},
        {"===.=.=", 'd'},
        {"=", 'e'},
        {"=.=.===.=", 'f'},
        {"===.===.=", 'g'},
        {"=.=.=.=", 'h'},
        {"=.=", 'i'},
        {"=.===.===.===", 'j'},
        {"===.=.===", 'k'},
        {"=.===.=.=", 'l'},
        {"===.===", 'm'},
        {"===.=", 'n'},
        {"===.===.===", 'o'},
        {"=.===.===.=", 'p'},
        {"===.===.=.===", 'q'},
        {"=.===.=", 'r'},
        {"=.=.=", 's'},
        {"===", 't'},
        {"=.=.===", 'u'},
        {"=.=.=.===", 'v'},
        {"=.===.===", 'w'},
        {"===.=.=.===", 'x'},
        {"===.=.===.===", 'y'},
        {"===.===.=.=", 'z'}
    };

    for (n; n > 0; n--) {
        string morse_code, word, letter, result = "";
        size_t pos_word = 0;
        cin >> morse_code;

        while (pos_word != string::npos) {
            pos_word = morse_code.find(".......");
            word = morse_code.substr(0, pos_word);
            morse_code.erase(0, pos_word + 7);
            size_t pos_letter = 0;

            while (pos_letter != string::npos) {
                pos_letter = word.find("...");
                letter = word.substr(0, pos_letter);
                word.erase(0, pos_letter + 3);
                result += morse_map[letter];
            }

            result += ' ';
        }

        result.pop_back();
        cout << result << '\n';
    }

    return 0;
}