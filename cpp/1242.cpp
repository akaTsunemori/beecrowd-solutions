#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string rnaa;

    while (cin >> rnaa) {
        int count = 0, len = rnaa.length(), i;
        stack<char> rnaa_stack;

        for (i = 0; i < len; i++) {
            if (!rnaa_stack.empty() && (
                (rnaa[i] == 'B' && rnaa_stack.top() == 'S') ||
                (rnaa[i] == 'S' && rnaa_stack.top() == 'B') ||
                (rnaa[i] == 'C' && rnaa_stack.top() == 'F') ||
                (rnaa[i] == 'F' && rnaa_stack.top() == 'C')
            )) {
                count++;
                rnaa_stack.pop();
            } else {
                rnaa_stack.push(rnaa[i]);
            }
        }

        cout << count << '\n';        
    }

    return 0;
}