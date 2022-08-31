#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int n, operation, value;

    while (cin >> n) {
        stack<int> stack;
        queue<int> queue;
        priority_queue<int> priority_queue;
        bool is_stack = true, is_queue = true, is_priority_queue = true;

        for (n; n > 0; n--) {
            cin >> operation >> value;
            
            if (operation == 1) {
                stack.push(value);
                queue.push(value);
                priority_queue.push(value);
            } else {
                if (value != stack.top()) {
                    is_stack = false;
                }
                if (value != queue.front()) {
                    is_queue = false;
                }
                if (value != priority_queue.top()) {
                    is_priority_queue = false;
                }

                stack.pop();
                queue.pop();
                priority_queue.pop();
            }
        }

        if ((is_stack && is_queue) ||
            (is_stack && is_priority_queue) ||
            (is_queue && is_priority_queue)) {
                cout << "not sure\n";
        } else if (is_stack || is_queue || is_priority_queue) {
            if (is_stack) {
                cout << "stack\n";
            } else if (is_queue) {
                cout << "queue\n";
            } else if (is_priority_queue) {
                cout << "priority queue\n";
            }
        } else {
            cout << "impossible\n";
        }
    }

    return 0;
}