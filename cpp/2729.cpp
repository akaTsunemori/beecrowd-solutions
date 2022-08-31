#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        string shopping_list, item, result = "";
        getline(cin, shopping_list);
        stringstream ss(shopping_list);
        set<string> shopping_set;

        while (ss >> item) {
            shopping_set.insert(item);
        }

        for (auto i: shopping_set) {
            result += i + ' ';
        }

        result.pop_back();
        cout << result << '\n';
    }

    return 0;
}