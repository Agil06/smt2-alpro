#include <stdio.h>
//SEQSEARCH1

int main()
{
    int IX = 0;
    int i = 0;

    int T[20] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    // int x = 10;
    int x = 70;

    while (i < 20 && T[i] != x) {
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

// #include <stdio.h>
// // SEQSEARCH1

// int main()
// {
//     int IX = 0;
//     int i = 0;

//     int T[5] = {1, 2, 3, 4, 5};
//     int x = 6;

//     while (i < 5 && T[i] != x) {
//         i++;
//     }

//     if (i < 5) { 
//         IX = i;
//         printf("Element ditemukan di indeks %d\n", i);
//     } else {
//         IX = -1; 
//         printf("Element tidak ditemukan\n");
//     }

//     return 0;
// }
