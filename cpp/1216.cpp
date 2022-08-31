#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string name;
    int age, count = 0;
    long  long int age_sum = 0;
    while (getline(cin, name)) {
        cin >> age;
        getchar();
        age_sum += age;
        count++;
    }
    age_sum *= 10;
    count *= 10;
    printf("%.1f\n", (double)age_sum / count);
    return 0;
}