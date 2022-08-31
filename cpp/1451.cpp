#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string sentence;
    while (getline(cin, sentence)) {
        string stack = "", aux = "";
        vector<string> home;
        int c = -1;
        bool flag = false;
        for (auto i: sentence) {
            if (i == '[') {
                flag = true;
                home.push_back(aux);
                c++;
            } else if (i == ']') {
                flag = false;
            } else if (flag) {
                home.at(c) += i;
            } else {
                stack += i;
            }
        }
        for (int i = home.size() - 1; i > -1; i--) {
            cout << home.at(i);
        }
        cout << stack << '\n';
    }
    return 0;
}