#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void diet_plan(string diet, string breakfast, string lunch)
{
    string dinner = "";
    int i, d_len = diet.length(), b_len = breakfast.length(), l_len = lunch.length();

    for (i = 0; i < b_len; i++) {
        if (diet.find(breakfast[i]) == string::npos) {
            cout << "CHEATER\n";
            return;
        }
    }

    for (i = 0; i < l_len; i++) {
        if (diet.find(lunch[i]) == string::npos) {
            cout << "CHEATER\n";
            return;
        }
    }

    for (i = 0; i < d_len; i++) {
        if ((breakfast.find(diet[i]) == string::npos) && (lunch.find(diet[i]) == string::npos)) {
            dinner += diet[i];
        }
    }

    sort(dinner.begin(), dinner.end());
    cout << dinner << '\n';
    return;
}

int main()
{
    int n;
    string a, b, c;
    cin >> n;
    getchar();

    for (n; n > 0; n--) {
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);
        diet_plan(a, b, c);
    }

    return 0;
}