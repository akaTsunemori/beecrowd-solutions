#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string friends, new_friends, operation, word, result = "";
    getline(cin, friends);
    getline(cin, new_friends);
    getline(cin, operation);

    if (operation == "nao") {
        cout << friends << ' ' << new_friends << '\n';
    } else {
        stringstream ss(friends);

        while (ss >> word) {
            if (word == operation) {
                result += new_friends + ' ';
            }

            result += word + ' ';
        }

        result.pop_back();
        cout << result << '\n';
    }

    return 0;
}