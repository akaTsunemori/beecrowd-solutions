#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (0 <= b && b <= 2) {
        cout << "nova\n";
    }
    else if (97 <= b && b <= 100) {
        cout << "cheia\n";
    }
    else if (a < b) {
        cout << "crescente\n";
    }
    else {
        cout << "minguante\n";
    }
    return 0;
}