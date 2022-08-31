#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    while (getline(cin, str)) {
        string result = "";
        bool flag = true;
        int i;

        for (i = 0; i < str.length(); i++) {
            if (isdigit(str[i])) {
                result += str[i];
            } else if (str[i] == 'O' || str[i] == 'o') {
                result += '0';
            } else if (str[i] == 'l') {
                result += '1';
            } else if (str[i] != ',' && str[i] != ' ') {
                flag = false;
                break;
            }
        }

        while (result[0] == '0') {
            if (result.length() <= 1) {
                break;
            }

            result.erase(0, 1);
        }

        if (flag == true && result != "" && result.length() <= 10) {
            long long int r = stoll(result);

            if (r <= 2147483647) {
                cout << result << endl;
            } else {
                cout << "error" << endl;
            }
        } else {
            cout << "error" << endl;
        }
    }

    return 0;
}