#include <iostream>
#include <algorithm>

using namespace std;

int super_cool(int aux[], int length)
{
    int result = 0, index = 0, a[length] = {}, b[length] = {}, i, l;
    length--;

    for (i = 0; i < length; i++) {
        l = i;

        while (index > 0 && aux[i] < b[index - 1]) {
            result = max(result, (i - a[index - 1] + 1) * (b[index - 1] + 1));
            l = a[index - 1];
            index--;
        }

        a[index] = l;
        b[index] = aux[i];
        index++;
    }

    while (index > 0) {
        result = max(result, (length - a[index - 1] + 1) * (b[index - 1] + 1));
        index--;
    }

    return result;
}

int main()
{
    int l, c, i, j, result = 0;
    cin >> l >> c;
    int matrix[l][c], aux[c] = {};

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    for (i = 0; i < l - 1; i++) {
        for (j = 0; j < c - 1; j++) {
            if (matrix[i][j] + matrix[i + 1][j + 1] <= matrix[i][j + 1] + matrix[i + 1][j]) {
                aux[j]++;
            } else {
                aux[j] = 0;
            }
        }

        result = max(result, super_cool(aux, c));
    }

    cout << result << '\n';
    return 0;
}