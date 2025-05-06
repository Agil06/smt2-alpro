#include <stdio.h>
// SEQSEARCHBOOL

int main()
{
    int i = 0;
    int FOUND = 0;

    int T[5] = {1, 2, 3, 4, 5};
    int x = 7;

    while (i < 5 && T[i] != x) {
        i++;
    }

    FOUND = (T[i] == x);

    printf("IX = %d\n", FOUND);

    return 0;
}

// #include <stdio.h>
// // SEQSEARCHBOOL

// int main()
// {
//     int i = 0;
//     int FOUND = 0;

//     int T[5] = {1, 2, 3, 4, 5};
//     int x = 7;

//     while (i < 5 && T[i] != x) 
//     {
//         i++;
//     }

//     if (i < 5) 
//     { 
//         FOUND = 1; 
//     } 
    
//     else 
//     {
//         FOUND = 0;
//     }

//     printf("IX = %d\n", FOUND);

//     return 0;
// }
