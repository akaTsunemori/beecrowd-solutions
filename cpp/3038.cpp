#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int len, i;

    while (getline(cin, str)) {
        len = str.length();

        for (i = 0; i < len; i++) {
            switch (str[i])
            {
                case '@':
                    str[i] = 'a';
                    break;

                case '&':
                    str[i] = 'e';
                    break;

                case '!':
                    str[i] = 'i';
                    break;

                case '*':
                    str[i] = 'o';
                    break;

                case '#':
                    str[i] = 'u';
                    break;
            }
        }

        cout << str << '\n';
    }

    return 0;
}