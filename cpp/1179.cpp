#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> odd;
    vector<int> even;
    int n, i, j, len_odd, len_even;

    for (i = 0; i < 15; i++) {
        cin >> n;

        if (n % 2 == 0) {
            even.push_back(n);
        } else {
            odd.push_back(n);
        }

        len_odd = odd.size();
        len_even = even.size();

        if (len_odd == 5) {
            for (j = 0; j < len_odd; j++) {
                printf("impar[%d] = %d\n", j, odd.at(j));
            }

            odd.clear();
        }

        if (len_even == 5) {
            for (j = 0; j < len_even; j++) {
                printf("par[%d] = %d\n", j, even.at(j));
            }

            even.clear();
        }
    }

    for (j = 0; j < len_odd; j++) {
        printf("impar[%d] = %d\n", j, odd.at(j));
    }

    for (j = 0; j < len_even; j++) {
        printf("par[%d] = %d\n", j, even.at(j));
    }

    return 0;
}