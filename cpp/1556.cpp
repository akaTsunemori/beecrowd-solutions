#include<bits/stdc++.h>

using namespace std;

string s;
set<string> ans;

void dfs(int i, string substr)
{
    if (i == s.size()) {
        ans.insert(substr);
        return;
    }
    if (ans.find(substr+s[i]) == ans.end()) {
        dfs(i+1, substr+s[i]);
    }
    dfs(i+1, substr);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (cin >> s) {
        dfs(0, "");
        ans.erase("");
        for (string a: ans) {
            cout << a << '\n';
        }
        cout << '\n';
        ans.clear();
    }

    return 0;
}
