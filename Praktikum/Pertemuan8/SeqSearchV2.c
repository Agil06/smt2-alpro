#include <stdio.h>
//SEQSEARCH2

int main()
{
    int FOUND = 0;
    int i = 0;
    int T[5] = {1, 2, 3, 4, 5};
    int x = 1;

    while (i < 5 && !FOUND) {
        if (T[i] == x) 
        {
            FOUND = 1;
            printf("Element ditemukan %d\n", i);
        }
        else {
            i++;
            FOUND = 0;
            printf("Element tidak ditemukan\n");
        }
    }
    
    return 0;
}
