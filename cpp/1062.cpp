#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n != 0) {
        while (true) {
            stack<int> wagons, result, station;
            int w_n;
            cin >> w_n;
            if (w_n == 0) {
                break;
            } else {
                wagons.push(w_n);
            }
            for (int i = 1; i < n; i++) {
                cin >> w_n;
                wagons.push(w_n);
            }
            w_n = n;
            while (true) {
                if (!station.empty() && station.top() == w_n) {
                    result.push(station.top());
                    station.pop();
                    w_n--;
                } else if (!wagons.empty() && wagons.top() != w_n) {
                    station.push(wagons.top());
                    wagons.pop();
                } else if (!wagons.empty()) {
                    result.push(wagons.top());
                    wagons.pop();
                    w_n--;
                } else {
                    break;
                }
            }
            if (!station.empty() || !wagons.empty()) {
                cout << "No\n";
            } else {
                cout << "Yes\n";
            }
        }
        cout << '\n';
        cin >> n;
    }
    return 0;
}