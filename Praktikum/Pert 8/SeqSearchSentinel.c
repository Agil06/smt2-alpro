#include <stdio.h>

int IX = 0;
int i = 0;
int x = 3;
int T[5] = {1, 3, 5, 3, 4};


int main (void)
{
    while (T[i] != x) 
    {
        i++;
    }
    if (i < 5 + 1)
    {
        printf("%d\n", IX);
        IX = i;
    }
    else
    {
        IX = 0;
    }
    printf("%d\n", IX);
}