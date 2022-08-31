#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int a = 0, b = 0, i, l = str.length();

    for (i = 0; i < l; i++) {
        if (str[i] == '(') {
            a++;
        } else if (b < a) {
            b++;
        }
    }

    if (a != b) {
        cout << "Ainda temos " << a - b << " assunto(s) pendente(s)!\n";
    } else {
        cout << "Partiu RU!\n";
    }

    return 0;
}