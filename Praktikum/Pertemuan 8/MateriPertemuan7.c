#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x = 4;
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
