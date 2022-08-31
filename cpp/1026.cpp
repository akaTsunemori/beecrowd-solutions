#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>

using namespace std;

unsigned int perform_sum(unsigned int a_int, unsigned int b_int)
{
    if (a_int == b_int) {
        return 0;
    }
    int i;
    string a, b, res;
    a = bitset<32>(a_int).to_string();
    b = bitset<32>(b_int).to_string();
    res = bitset<32>(0).to_string();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (i = 0; i < 32; i++) {
        if (a[i] != b[i]) {
            res[i] = '1';
        }
    }
    reverse(res.begin(), res.end());
    return stoul(res, 0, 2);
}

int main()
{
    unsigned int a, b;
    while (cin >> a >> b) {
        cout << perform_sum(a, b) << '\n';
    }
    return 0;
}