#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int find(string str, string item) {
    int i;

    for (i = 0; i < str.length(); i++) {
        if (str[i] == item[0]) {
            return i;
        }
    }

    return -1;
}

int main() {
    while (true) {
        int n, i, j, position = 1, count = 0;
        cin >> n;

        if (n == 0)  {
            break;
        }

        for (i = 0; i < n; i++) {
            string track = "", aux;

            for (j = 0; j < 3; j++) {
                cin >> aux;
                track += aux;
            }

            if (find(track, "1") != -1) {
                count += abs(position - find(track, "0"));
                position = find(track, "0");
            }
        }

        cout << count << endl;
    }
}