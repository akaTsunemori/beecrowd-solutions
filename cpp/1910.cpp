#include<bits/stdc++.h>

using namespace std;

int o, d, k, t = 0, aux;
int ch, ct;
int MAX = 100001;
int visited[100001];

int bfs()
{
    queue<pair<int, int>> qu;
    qu.push({o, 0});
    while (!qu.empty()) {
        tie(ch, ct) = qu.front();
        qu.pop();
        if (ch == d)
            return ct;
        if (ch-1 > 0 && visited[ch-1] != t) {
            visited[ch-1] = t;
            qu.push({ch-1, ct+1});
        }
        if (ch+1 < MAX && visited[ch+1] != t) {
            visited[ch+1] = t;
            qu.push({ch+1, ct+1});
        }
        if (ch*2 < MAX && visited[ch*2] != t) {
            visited[ch*2] = t;
            qu.push({ch*2, ct+1});
        }
        if (ch*3 < MAX && visited[ch*3] != t) {
            visited[ch*3] = t;
            qu.push({ch*3, ct+1});
        }
        if (ch%2 == 0 && ch/2 > 0 && visited[ch/2] != t) {
            visited[ch/2] = t;
            qu.push({ch/2, ct+1});
        }
    }
    return -1;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> o >> d >> k;
    while (o || d || k) {
        ++t;
        for (int i = 0; i < k; i++) {
            cin >> aux;
            visited[aux] = t;
        }
        cout << bfs() << '\n';
        cin >> o >> d >> k;
    }

    return 0;
}
