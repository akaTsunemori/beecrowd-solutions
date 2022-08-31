#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    
    while (cin >> n) {
        map<int, string> exp_map;
        string meat, result = "";
        int expiration;

        for (n; n > 0; n--) {
            cin >> meat >> expiration;
            exp_map[expiration] = meat;
        }

        for (auto i: exp_map) {
            result += i.second + ' ';
        }

        result.pop_back();
        cout << result << '\n';
    }

    return 0;
}