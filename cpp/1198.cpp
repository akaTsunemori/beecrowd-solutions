#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int hashmat, opponent;

    while (cin >> hashmat >> opponent) {
        cout << abs(hashmat - opponent) << '\n';
    }

    return 0;
}