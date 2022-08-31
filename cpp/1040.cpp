#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float a, b, c, d, average, new_grade;
    cin >> a >> b >> c >> d;
    average = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
    printf("Media: %.1f\n", average);

    if (average >= 7) {
        cout << "Aluno aprovado.\n";
    } else if (average < 5) {
        cout << "Aluno reprovado.\n";
    } else {
        cout << "Aluno em exame.\n";
        cin >> new_grade;
        printf("Nota do exame: %.1f\n", new_grade);
        average = (new_grade + average) / 2;

        if (average >= 5) {
            cout << "Aluno aprovado.\n";
        } else {
            cout << "Aluno reprovado.\n";
        }

        printf("Media final: %.1f\n", average);
    }

    return 0;
}