#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool sort_parameters(const pair<int,int> &a, const pair<int,int> &b) {
    if(a.first < b.first) return true;
    if(a.first > b.first) return false;
    return a.second >= b.second;
}

int main()
{
    string s;
    bool flag = false;
    
    while (getline(cin, s)) {
        if (flag) {
            cout << '\n';
        }

        flag = true;
        vector<pair<int, int>> vec;
        pair<int, int> pair;
        int arr[256] = {0}, len = s.length(), i;

        for (i = 0; i < len; i++) {
            arr[(int)s[i]]++;
        }

        for (i = 0; i < 256; i++) {
            if (arr[i] > 0) {
                pair.first = arr[i];
                pair.second = i;
                vec.push_back(pair);
            }
        }

        sort(vec.begin(), vec.end(), sort_parameters);

        for (auto j: vec) {
            cout << j.second << ' ' << j.first << '\n';
        }
    }

    return 0;
}