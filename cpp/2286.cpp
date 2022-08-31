#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count = 1, n, a, b;
    string even, odd;
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        cin >> even >> odd;
        cout << "Teste " << count << '\n';
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            if ((a + b) % 2 == 0) {
                cout << even << '\n';
            }
            else {
                cout << odd << '\n';
            }
        }
        cout << '\n';
        count++;
    }
    return 0;
}