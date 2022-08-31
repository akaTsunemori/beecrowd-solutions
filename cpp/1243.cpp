#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

bool is_this_str_alpha(string str)
{
    int i;

    for (i = 0; i < str.length(); i++) {
        if (!(isalpha(str[i]))) {
            return false;
        }
    }

    return true;
}

int main()
{
    string sentence;

    while (getline(cin, sentence)) {
        sentence += " ";
        string split = " ", word, words = "", i;
        char last;
        int amount = 0, average;
        auto start = 0U;
        auto end = sentence.find(split);

        while (end != string::npos) {
            word = sentence.substr(start, end - start);
            last = word.back();

            if (last == '.') {
                word.pop_back();
            }

            if (is_this_str_alpha(word) && word != "") {
                words += word;
                amount += 1;
            }

            start = end + split.length();
            end = sentence.find(split, start);
        }

        if (amount == 0) {
            amount = 1;
        }

        average = floor(static_cast<float>(words.length()) / amount);

        if (average <= 3) {
            cout << 250 << endl;
        } else if (average <= 5) {
            cout << 500 << endl;
        } else {
            cout << 1000 << endl;
        }
    }

    return 0;
}