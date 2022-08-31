#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, signal, b, aux;
    int result;
    cin >> a >> signal >> b;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '7') {
            a[i] = '0';
        }
    }
    for (int i = 0; i < b.length(); i++) {
        if (b[i] == '7') {
            b[i] = '0';
        }
    }
    if (signal == "x") {
        aux = to_string(stoi(a) * stoi(b));
    }
    else {
        aux = to_string(stoi(a) + stoi(b));
    }
    for (int i = 0; i < aux.length(); i++) {
        if (aux[i] == '7') {
            aux[i] = '0';
        }
    }
    result = stoi(aux);
    cout << result << '\n';
    return 0;
}