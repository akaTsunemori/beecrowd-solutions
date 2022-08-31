#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    const double PI = 3.1415926535897;

    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        double p = (double)(a + b + c) / 2;

        double triangleArea = sqrt(p * (p - a) * (p - b) * (p - c));
        double innerCircleRadius = triangleArea / p;
        double innerCircleArea = PI * pow(innerCircleRadius, 2);
        double outerCircleRadius = (a * b * c) / (4 * triangleArea);
        double outerCircleArea = PI * pow(outerCircleRadius, 2);

        double sunflowers = outerCircleArea - triangleArea;
        double violets = triangleArea - innerCircleArea;
        double roses = innerCircleArea;

        printf("%.4f %.4f %.4f\n", sunflowers, violets, roses);
    }

    return 0;
}