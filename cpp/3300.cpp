#include <iostream>
#include <string>

using namespace std;

bool suerte(string n)
{
    int len = n.length(), i;
    len--;

    for (i = 0; i < len; i++) {
        if (n[i] == '1' && n[i + 1] == '3') {
            return false;
        }
    }

    return true;
}

int main()
{
    string number;
    cin >> number;

    if (suerte(number)) {
        cout << number << " NO es de Mala Suerte\n";
    } else {
        cout << number << " es de Mala Suerte\n";
    }

    return 0;
}