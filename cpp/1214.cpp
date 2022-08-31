#include <iostream>

using namespace std;

int main() {
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++) {
        int students, j;
        cin >> students;
        int grades[students], sum = 0, above = 0;
        float average;

        for (j = 0; j < students; j++) {
            cin >> grades[j];
        }

        for (j = 0; j < students; j++) {
            sum += grades[j];
        }

        average = (float)(sum) / students;

        for (j = 0; j < students; j++) {
            if (grades[j] > average) {
                above += 1;
            }
        }

        printf("%.3f%s\n", ((float)above / students) * 100, "%");
    }
}