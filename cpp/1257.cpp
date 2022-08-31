#include <iostream>
#include <string>

using namespace std;

int arrayHash(string words[], int elements[], int length) {
    int result = 0, i, j;

    for (i = 0; i < length; i++) {
        for (j = 0; j < words[i].length(); j++) {
            result += (int(words[i][j]) - 65) + j + elements[i];
        }
    }

    return result;
}

int main() {
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++) {
        int l, j, count = 0;
        cin >> l;
        int elements[l];
        string words[l];

        for (j = 0; j < l; j++) {
            cin >> words[j];
            elements[j] = count;

            count += 1;
        }

        cout << arrayHash(words, elements, l) << endl;
    }
}