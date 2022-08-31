#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    int cases, count = 1;

    while (scanf("%d", &cases) != EOF) {
        int i, j, length = 1;
        string sequence = "0 ";

        for (i = 1; i <= cases; i++) {
            for (j = 0; j < i; j++) {
                sequence += to_string(i) + " ";
                length += 1;
            }
        }

        sequence.pop_back();

        if (length == 1) {
            printf("Caso %d: %d numero\n", count, length);    
        } else {
            printf("Caso %d: %d numeros\n", count, length);
        }
        
        cout << sequence << "\n" << endl;
        count++;
    }
}