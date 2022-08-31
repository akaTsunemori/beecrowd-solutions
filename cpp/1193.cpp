#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int number, j = 0;
        string num, basis, result;
        cin >> num >> basis;
        cout << "Case " << dec << i << ":\n";

        if (basis == "bin") {
            number = stoi(num, nullptr, 2);
            cout << dec << number << " dec\n";
            cout << hex << number << " hex\n";

        } else if (basis == "hex") {
            number = stoi(num, nullptr, 16);
            result = bitset<32>(number).to_string();
            while (result[j] == '0') j++;
            result.erase(0, j);
            cout << dec << number << " dec\n";
            cout << result << " bin\n";

        } else {
            number = stoi(num);
            result = bitset<32>(number).to_string();
            while (result[j] == '0') j++;
            result.erase(0, j);
            cout << hex << number << " hex\n";
            cout << result << " bin\n";
        }

        cout << '\n';
    }

    return 0;
}