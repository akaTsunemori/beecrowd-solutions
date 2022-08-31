#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    int n, count = 0;
    string blocks, reversed;
    stack<string> stack;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        if (stack.size() == 0) {
            stack.push("F A C E");
        }

        getline(cin, blocks);
        reversed = blocks;
        reverse(reversed.begin(), reversed.end());

        if (reversed == stack.top()) {
            stack.pop();
            count++;
        } else {
            stack.push(blocks);
        }
    }

    cout << count << '\n';
    return 0;
}