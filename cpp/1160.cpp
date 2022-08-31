#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void growth(int pa, int pb, float g1, float g2)
{
    int years = 0;

    while (pa <= pb) {
        pa += floor(static_cast<float>(pa) * g1 / 100);
        pb += floor(static_cast<float>(pb) * g2 / 100);
        years++;

        if (years > 100) {
            cout << "Mais de 1 seculo.\n";
            return;
        }
    }

    cout << years << " anos.\n";
    return;
}


int main()
{
    int n, i, pa, pb;
    float g1, g2;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> pa >> pb;
        cin >> g1 >> g2;
        growth(pa, pb, g1, g2);
    }

    return 0;
}