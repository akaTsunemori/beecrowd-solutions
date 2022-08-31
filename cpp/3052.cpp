#include <iostream>
#include <string>

using namespace std;

char matrix[505][505];

void dfs(int i, int j)
{
    if (matrix[i + 1][j] == '.') {
        matrix[i + 1][j] = 'o';
        dfs(i + 1, j);
    }
    if (matrix[i][j + 1] == '.' && matrix[i + 1][j] == '#') {
        matrix[i][j + 1] = 'o';
        dfs(i, j + 1);
    }
    if (matrix[i][j - 1] == '.' && matrix[i + 1][j] == '#') {
        matrix[i][j - 1] = 'o';
        dfs(i, j - 1);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        if (matrix[0][j] == 'o') {
            dfs(0, j);
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j];
        }
        cout << '\n';
    }
    return 0;
}