#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string tmp;
    int d1, h1, m1, s1, d2, h2, m2, s2;
    cin >> tmp >> d1 >> h1 >> tmp >> m1 >> tmp >> s1; 
    cin >> tmp >> d2 >> h2 >> tmp >> m2 >> tmp >> s2;

    if (s2 < s1) {
        s2 += 60;
        m2--;
    }

    if (m2 < m1) {
        m2 += 60;
        h2--;
    }

    if (h2 < h1) {
        h2 += 24;
        d2--;
    }

    printf("%d dia(s)\n", d2 - d1);
    printf("%d hora(s)\n", h2 - h1);
    printf("%d minuto(s)\n", m2 - m1);
    printf("%d segundo(s)\n", s2 - s1);
    return 0;
}