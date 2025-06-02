#include <stdio.h>

int main() {
    int TABINT[100] = {2, 3, 7, 10, 100};
    int NMK = 5;
    int MKX = 11;
    int i, j;

    i = 1;
    while (i < NMK || TABINT[i])
    {
        i++;
    }
    if (i >= 100)
    {
        printf("tabelpenuh\n");
    }
    else if (i <= NMK) 
    {
        printf("Udah ada\n");
    }
    else 
    {
        j = NMK;
        while (j > i)
        {
            TABINT[j] = TABINT[j-1];
        }
        TABINT[i] = MKX;
        NMK = NMK + 1;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",TABINT[i]);
    }
    printf("\n");
}


