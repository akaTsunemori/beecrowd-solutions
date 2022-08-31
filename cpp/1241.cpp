#include <iostream>
#include <string>

using namespace std;

bool does_it_fit(string a, string b)
{
    int len_a = a.length(), len_b = b.length(), i, j;

    if (len_a < len_b) {
        return false;
    }

    for (i = len_a - len_b, j = 0; i < len_a, j < len_b; i++, j++) {
        if (a[i] != b[j]) {
            return false;
        }
    }

    return true;
}

int main()
{
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++) {
        string str_a, str_b;
        cin >> str_a;
        cin >> str_b;
        
        if (does_it_fit(str_a, str_b) == true) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}