#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int count = 0;
    float score, sum = 0;

    while (count < 2) {
        cin >> score;

        if (0 <= score && score <= 10) {
            sum += score;
            count++;
        } else {
            cout << "nota invalida\n";
        }
    }

    printf("media = %.2f\n", sum / 2);
    return 0;
}