#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b, aux;

    while (getline(cin, a)) {
        getline(cin, b);
        int len_a = a.length(), len_b = b.length(), result = 0, i, j;

        if (len_a < len_b) {
            aux = a;
            a = b;
            b = aux;
        }

        for (i = 0; i < len_b; i++) {
            int partial = 0, count = i;
            string substring = "";
            substring += b[i];

            for (j = i; j < len_b; j++) {
                if (a.find(substring) == string::npos) {
                    if (result < partial) {
                        result = partial;
                    }

                    break;
                }

                partial++;

                if (j == len_b - 1) {
                    if (result < partial) {
                        result = partial;
                    }

                    break;
                }

                count++;
                substring += b[count];
            }
        }

        cout << result << endl;
    }

    return 0;
}