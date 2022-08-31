#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x, t;
    cin >> n >> x;
    string titans;
    getchar();
    getline(cin, titans);
    int p, m, g;
    cin >> p >> m >> g;
    int walls[n];
    for (t = 0; t < n; t++) walls[t] = x;
    int i = 0, j = 0, k = 0, sum = 0;

    for (t = 0; t < n; t++) {
        switch (titans[t])
        {
            case 'P':
                while (walls[i] < p) i++;
                walls[i] -= p;
                break;

            case 'M':
                while (walls[j] < m) j++;
                walls[j] -= m;
                break;

            case 'G':
                while (walls[k] < g) k++;
                walls[k] -= g;
                break;
        }
    }

    for (t = 0; t < n; t++) {
        if (walls[t] < x) {
            sum++;
        }
    }

    cout << sum << '\n';
    return 0;
}