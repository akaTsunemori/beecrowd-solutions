#include <iostream>
#include <string>

using namespace std;

bool balance(string e)
{
    int a = 0, b = 0, i;

    for (i = 0; i < e.length(); i++) {
        if (e[i] == '(') {
            a++;
        } else if (e[i] == ')') {
            b++;

            if (a < b) {
                return false;
            }
        }
    }

    return (a == b) ? true : false;
}

int main()
{
    string expression;

    while (getline(cin, expression)) {
        if (balance(expression)) {
            cout << "correct\n";
        } else {
            cout << "incorrect\n";
        }
    }

    return 0;
}