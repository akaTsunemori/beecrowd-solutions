#include <iostream>
#include <string>

using namespace std;

void international_chat(string langs[], int i) {
    for (i; i > 0; i--) {
        if (langs[i] != langs[0]) {
            cout << "ingles\n";
            return;
        }
    }

    cout << langs[0] << '\n';
    return;
}

int main()
{
    int n, k, i;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> k;
        string languages[k];

        for (i = 0; i < k; i++) {
            cin >> languages[i];
        }

        international_chat(languages, --k);
    }

    return 0;
}