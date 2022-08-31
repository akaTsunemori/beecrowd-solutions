#include <iostream>

using namespace std;

int main()
{
    int n;

    while (cin >> n) {
        int ones = 1, count = 1;

        while (ones % n != 0) {
            ones = (10 * ones + 1) % n;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}