#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;

    while (true) {
        cin >> n;
        if (n == 0) break;

        int length = n / 2, count = 1, max_count = 1, i, j;
        bool odd = false;

        if (n % 2 != 0) {
            odd = true;
            length++;
        }

        int matrix[length][n];

        for (i = 0; i < length; i++) {
            for (j = 0; j < n; j++) {
                matrix[i][j] = 1;
            }
        }

        for (i = 0; i < length; i++) {
            count = 1;

            for (j = 0; j < n / 2; j++) {
                matrix[i][j] = count;
                if (count != max_count) count++;
            }

            count = 1;

            for (j = n - 1; j > n / 2 - 1; j--) {
                matrix[i][j] = count;
                if (count != max_count) count++;
            }

            max_count++;
        }

        if (odd) matrix[n / 2][n / 2] = length;

        for (i = 0; i < length; i++) {
            for (j = 0; j < n - 1; j++) {
                printf("%3d ", matrix[i][j]);
            }

            printf("%3d\n", matrix[i][j]);
        }

        for (i = n / 2 - 1; i > -1; i--) {
            for (j = 0; j < n - 1; j++) {
                printf("%3d ", matrix[i][j]);
            }

            printf("%3d\n", matrix[i][j]);
        }

        cout << '\n';
    }

    return 0;
}