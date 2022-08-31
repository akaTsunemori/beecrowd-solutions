#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    unsigned long long int a = 0, b = 1, i = 0;
    vector<unsigned long long int> fibo;
    while (fibo.size() < 61) {
        if (b % 3 == 0 || to_string(b).find('3') != string::npos) {
            fibo.push_back(b);
        }
        b = b + a;
        a = b - a;
    }
    int n;
    while (cin >> n) {
        cout << fibo[n - 1] << '\n';
    }
    return 0;
}