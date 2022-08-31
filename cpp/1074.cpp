#include <iostream>

using namespace std;

void even_or_odd(int n) {
    if (n == 0) {
        cout << "NULL\n";
        return;
    }

    bool even = false;

    if (n % 2 == 0) {
        even = true;
    }

    if (n < 0) {
        cout << ((even == true) ? "EVEN " : "ODD ") << "NEGATIVE\n";
    } else {
        cout << ((even == true) ? "EVEN " : "ODD ") << "POSITIVE\n";
    }

    return;
}

int main()
{
    int n, i, p;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> p;
        even_or_odd(p);
    }

    return 0;
}