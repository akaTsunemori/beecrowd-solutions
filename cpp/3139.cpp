#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

int main()
{
    queue<int> d;
    int n, m, i, aux, aux_count = 0, current = 0, d_sum = 0, count = 0;
    bool flag = false;
    cin >> n >> m;

    for (i = 0; i < 30; i++) {
        cin >> aux;
        d.push(aux);
        d_sum += aux;
    }

    while (n < m) {
        aux = ceil(d_sum / 30.0);

        if (current != aux) {
            aux_count = 0;
            current = aux;
        }

        if (aux_count == 50) {
            flag = true;
            break;
        }

        n += aux;
        d_sum += aux - d.front();
        d.push(aux);
        d.pop();
        count++;
        aux_count++;
    }

    if (flag) {
        count += ceil((m - n) / (double)aux);
    }

    cout << count << '\n';
    return 0;
}