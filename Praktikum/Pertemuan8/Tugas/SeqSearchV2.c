#include <stdio.h>
//SEQSEARCH2

int main()
{
    int FOUND = 0;
    int i = 0;
    int T[20] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    int x = 15;
    // int x = 60;

    while (i < 20 && !FOUND) {
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
