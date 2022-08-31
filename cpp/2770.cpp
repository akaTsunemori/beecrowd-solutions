#include <iostream>

using namespace std;

int main() {
    int x, y, m;

    while (scanf("%d %d %d", &x, &y, &m) != EOF) {
        int i, x2, y2;

        for (i = 0; i < m; i++) {
            scanf("%d %d", &x2, &y2);

            if ((x2 <= x && y2 <= y) || (x2 <= y && y2 <= x)) {
                cout << "Sim" << endl;
            } else {
                cout << "Nao" << endl;
            }
        }
    }
}