#include <iostream>
#include <string>
#include <cmath>
#include <stack>

using namespace std;

class Stack
{
    stack<pair<int, int>> my_stack;

    public:
        int count = 0;

        void push(int value)
        {
            int curr_min;

            if (count == 0) {
                curr_min = value;
            } else {
                curr_min = min(my_stack.top().first, value);
            }

            count++;
            my_stack.push(make_pair(curr_min, value));
        }

        void pop()
        {
            count--;
            my_stack.pop();
        }

        int get_min()
        {
            return my_stack.top().first;
        }
};

int main()
{
    cin.tie(0)->sync_with_stdio(false);

    Stack stack;
    string op;
    int n, v;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> op;

        if (op == "PUSH") {
            cin >> v;
            stack.push(v);
        } else if (stack.count == 0) {
            cout << "EMPTY\n";
        } else if (op == "POP") {
            stack.pop();
        } else {
            cout << stack.get_min() << '\n';
        }
    }

    return 0;
}