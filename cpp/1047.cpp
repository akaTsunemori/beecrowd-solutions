#include <stdio.h>

using namespace std;

int main()
{
    int sh, sm, fh, fm; 
    scanf("%d %d %d %d", &sh, &sm, &fh, &fm);

    if (sh >= fh && sm >= fm) {
        fh += 24;
    }

    if (sm > fm) {
        fm += 60;
        fh--;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", fh - sh, fm - sm);
    return 0;
}