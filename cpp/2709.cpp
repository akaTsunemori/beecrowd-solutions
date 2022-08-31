#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int coins[n], step, sum = 0, upperBound, i;
        bool flag = true;

        for (i = n - 1; i >= 0; i--) {
            scanf("%d", &coins[i]);
        }

        scanf("%d", &step);

        for (i = 0; i < n; i += step) {
            sum += coins[i];
        }

        if (sum == 1 || sum == 2) {
            sum += 1;
        }

        upperBound = static_cast<int>(sqrt(sum) + 2);

        for (i = 2; i < upperBound; i++) {
            if (sum % i == 0) {
                flag = false;
                printf("Bad boy! I’ll hit you.\n");
                break;
            }
        }
        
        if (flag == true) {
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }
    }

    return 0;
}