#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x = 6;
    int i = 0;
    while (i < 5 && arr[i] != x) {
        i++;
    }
    if (arr[i] == x) {
        printf("Element ditemukan %d\n", i);
    }
    else {
        printf("Element tidak ditemukan\n");
    }
    
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int x = 6;
//     int i = 0;

//     while (i < 5 && arr[i] != x) {
//         i++;
//     }

//     if (i < 5) { // Ensure i is within bounds
//         printf("Element ditemukan di indeks %d\n", i);
//     } else {
//         printf("Element tidak ditemukan\n");
//     }
    
//     return 0;
// }