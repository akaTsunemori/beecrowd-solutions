#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    unordered_map<string, string> languages;
    string a, b;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        getline(cin, a);
        getline(cin, b);
        languages[a] = b;
    }

    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        getline(cin, a);
        getline(cin, b);
        cout << a << '\n' << languages[b] << '\n' << '\n';
    }

    return 0;
}