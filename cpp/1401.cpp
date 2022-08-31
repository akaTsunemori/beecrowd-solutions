#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void display(char arr[], int len)
{
    int i;

    for (i = 0; i < len; i++) {
        cout << arr[i];
    }

    cout << '\n';
}

int main()
{
    int n;
    cin >> n;

    for (n; n > 0; n--) {
        string str;
        cin >> str;
        int i, len = str.length();
        char arr[len];

        for (i = 0; i < len; i++) {
            arr[i] = str[i];
        }

        sort(arr, arr + len);

        do {
            display(arr, len);
        } while (next_permutation(arr, arr + len));

        cout << '\n';
    }

    return 0;
}