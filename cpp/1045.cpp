#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a < b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    if (a < c) {
        a = a + c;
        c = a - c;
        a = a - c;
    }

    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO\n";

    } else {
        if (a * a == b * b + c * c) {
            cout << "TRIANGULO RETANGULO\n";
        } else if (a * a > b * b + c * c) {
            cout << "TRIANGULO OBTUSANGULO\n";
        } else {
            cout << "TRIANGULO ACUTANGULO\n";
        }

        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO\n";
        } else if (a == b || a == c || b == c) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }

    return 0;
}