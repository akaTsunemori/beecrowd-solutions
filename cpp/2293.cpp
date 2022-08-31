#include <iostream>

using namespace std;

int main()
{
    int n, m, matrix[101][101];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int max_lines = 0, max_columns = 0, curr_sum = 0;
    for (int i = 0; i < n; i++) {
        curr_sum = 0;
        for (int j = 0; j < m; j++) {
            curr_sum += matrix[i][j];
        }
        max_lines = max(max_lines, curr_sum);
    }
    for (int j = 0; j < m; j++) {
        curr_sum = 0;
        for (int i = 0; i < n; i++) {
            curr_sum += matrix[i][j];
        }
        max_columns = max(max_columns, curr_sum);
    }
    cout << max(max_lines, max_columns) << '\n';
    return 0;
}