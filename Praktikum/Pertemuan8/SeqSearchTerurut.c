#include <stdio.h>
//SEQSEARCH1

int main()
{
    int IX = 0;
    int i = 0;

    int T[5] = {1, 2, 3, 4, 5};
    int x = 4;

    while (i < 5 && T[i] < x) {
        i++;
    }
    if (T[i] == x) {
        IX = i;
        printf("Element ditemukan %d\n", i);
    }
    else {
        IX = 0;
        printf("Element tidak ditemukan\n");
    }
    return 0;
}