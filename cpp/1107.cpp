#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, c, aux;
    vector<int> heights;
    while (cin >> a >> c) {
        if  (a == 0 && c == 0) {
            break;
        }
        for (int i = 0; i < c; i++) {
            cin >> aux;
            heights.push_back(aux);
        }
        int result = a - heights[0];
        for (int i = 1; i < c; i++) {
            if  (heights[i - 1] > heights[i]) {
                result += heights[i - 1] - heights[i];
            }
        }
        cout << result << '\n';
        heights.clear();
    }
    return 0;
}
