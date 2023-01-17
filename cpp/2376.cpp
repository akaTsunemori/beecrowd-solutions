#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<char> queue, queue_aux;
    for (int i = 65; i < 81; i++) {
        queue.push((char)i);
    }
    int a, b;
    for (int i = 0; i < 15; i++) {
        cin >> a >> b;
        if (queue.empty()) {
            while (!queue_aux.empty()) {
                queue.push(queue_aux.front());
                queue_aux.pop();
            }
        }
        if (a > b) {
            queue_aux.push(queue.front());
            queue.pop();
            queue.pop();
        }
        else {
            queue.pop();
            queue_aux.push(queue.front());
            queue.pop();
        }
    }
    cout << queue_aux.front() << '\n';
}
