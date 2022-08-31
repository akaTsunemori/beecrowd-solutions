#include <iostream>

using namespace std;

int main()
{
    int s, f;
    cin >> s >> f;

    if (s >= f) {
        f += 24;
    }

    cout << "O JOGO DUROU " << f - s << " HORA(S)\n";
    return 0;
}