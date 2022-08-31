#include <iostream>
#include <string>

using namespace std;

bool is_vowel(char c)
{
    int i = (int)c;

    if (i == 97 || i == 101 || i == 105 || i == 111 || i == 117 || 
        i == 65 || i == 69  || i == 73  || i == 79  || i == 85)
    {
        return true;
    }

    return false;
}

bool is_difficult(string s)
{
    int i, l, c = 0;
    l = s.length();

    for (i = 0; i < l; i++) {
        if (!is_vowel(s[i])) {
            c++;
        } else {
            c = 0;
        }

        if (c == 3) return true;
    }

    return false;
}

int main()
{
    int n;
    string s;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> s;
        
        if (is_difficult(s)) {
            cout << s << " nao eh facil\n";
        } else {
            cout << s << " eh facil\n";
        }
    }

    return 0;
}