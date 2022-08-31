#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        string sentence, search, word, positions = "";
        getline(cin, sentence);
        cin >> search;
        getchar();
        stringstream ss(sentence);
        int pos = 0;

        while (ss >> word) {
            if (word == search) {
                positions += to_string(pos) + ' ';
            }

            pos += word.length() + 1;
        }

        if (positions.length() > 0) {
            positions.pop_back();
            cout << positions << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}