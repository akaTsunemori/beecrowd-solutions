#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int num, ddd[8] = {61, 71, 11, 21, 32, 19, 27, 31};
    string dest[8] = {
        "Brasilia",
        "Salvador",
        "Sao Paulo",
        "Rio de Janeiro",
        "Juiz de Fora",
        "Campinas",
        "Vitoria",
        "Belo Horizonte"
    };

    cin >> num;
    auto i = find(ddd, ddd + 8, num);

    if (i != end(ddd)) {
        cout << dest[distance(ddd, i)] << '\n';
    } else {
        cout << "DDD nao cadastrado\n";
    }

    return 0;
}