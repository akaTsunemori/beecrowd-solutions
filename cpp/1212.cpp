#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a = "", b = "";

    while (true) {
        cin >> a >> b;

        if (a == "0" && b == "0") {
            break;
        }

        int len = a.length(), len_b = b.length();

        while (len < len_b) {
            a = "0" + a;
            len++;
        }

        while (len_b < len) {
            b = "0" + b;
            len_b++;
        }

        len--;
        long long int carry = 0, carry_operations = 0, current_sum;

        while (true) {
            current_sum = (int)(a[len]) + (int)(b[len]) - 96;

            if (carry > 0) {
                current_sum += carry;
                carry = 0;
            }

            if (current_sum > 9) {
                carry++;
                carry_operations++;
            }

            a.pop_back();
            b.pop_back();
            len--;

            if (len == -1) {
                break;
            }
        }

        if (carry_operations > 1) {
            cout << carry_operations << " carry operations.\n";
        } else if (carry_operations == 1) {
            cout << "1 carry operation.\n";
        } else {
            cout << "No carry operation.\n";
        }
    }

    return 0;
}