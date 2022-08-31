#include <iostream>
#include <string>
#include <map>
#include <queue>

using namespace std;

int main()
{
    string murderer, murdered;
    map<string, int> frequencies;
    queue<string> dead;

    while (cin >> murderer >> murdered) {
        dead.push(murdered);
        frequencies[murderer]++;
    }

    while (!dead.empty()) {
        frequencies.erase(dead.front());
        dead.pop();
    }

    cout << "HALL OF MURDERERS\n";

    for (auto i: frequencies) {
        cout << i.first << ' ' << i.second << '\n';
    }

    return 0;
}