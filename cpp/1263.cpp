#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string lower(string str)
{
    int i;
    string r = "";

    for (i = 0; i < str.length(); i++) {
        r += tolower(str[i]);
    }

    return r;
}

int main()
{
    string sentence;

    while (getline(cin, sentence)) {
        sentence = lower(sentence);
        char current = sentence[0];
        int count = 0, n = 0, i, result = 0;
        string str_arr[110];
        stringstream ss(sentence);

        while (ss.good()) {
            string a;
            getline(ss, a, ' ');
            str_arr[n] = a;
            n++;
        }
        
        for (i = 1; i < n; i++) {
            if (str_arr[i][0] == current) {
                count += 1;
            } else {
                count = 0;
            }

            if (count == 1) {
                result += 1;
            }

            current = str_arr[i][0];
        }

        cout << result << endl;
    }

    return 0;
}