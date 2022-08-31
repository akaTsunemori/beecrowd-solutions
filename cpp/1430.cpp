#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

int main()
{
    string song, aux;
    unordered_map<char, int> notes = {
        {'W', 1000000},
        {'H', 500000},
        {'Q', 250000},
        {'E', 125000},
        {'S', 62500},
        {'T', 31250},
        {'X', 15625}
    };

    while (cin >> song) {
        getchar();
        if (song == "*") break;
        int count = 0;
        stringstream ss(song);

        while (getline(ss, aux, '/')) {
            int i, l = aux.length(), compass_sum = 0;

            for (i = 0; i < l; i++) {
                compass_sum += notes[aux[i]];
            }

            if (compass_sum == 1000000) {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}