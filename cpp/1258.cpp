#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, i;
    string name, uniform;
    cin >> n;
    getchar();

    while (n != 0) {
        map<int, vector<string>> uniforms;
        string size_color[6] = {"branco P", "branco M", "branco G", "vermelho P", "vermelho M", "vermelho G"};

        for (i = 0; i < n; i++) {
            getline(cin, name);
            getline(cin, uniform);
            auto itr = find(size_color, size_color + 6, uniform);
            uniforms[distance(size_color, itr)].push_back(name);
        }

        for (auto key: uniforms) {
            sort(key.second.begin(), key.second.end());

            for (auto element: key.second) {
                cout << size_color[key.first] << ' ' << element << '\n';
            }
        }
        
        uniforms.clear();
        cin >> n;
        getchar();

        if (n != 0) {
            cout << '\n';
        }
    }

    return 0;
}