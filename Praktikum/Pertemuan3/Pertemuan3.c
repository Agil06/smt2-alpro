#include <stdio.h>

int main()
{
    // Kamus
    int i;


    //Algoritma
    // Traversal
    for (i = 0; i < 10; i++)
    {
        printf("Hello World\n");
    }
    printf("==================================\n");

    // while
    int n = 100;
    while (n > 0)
    {
        printf("%d\n", n);
        n = n / 2;
    }
    printf("==================================\n");

    // do while
    i = 0;
    do
    {
        printf("Hello World\n");
        i++;
    } while (i < 10);
    printf("==================================\n");
    // repeat until
    i = 0;
    do
    {
        printf("Hello World\n");
        i++;
    } while (!(i == 10));
    printf("==================================\n");

    // Nested Loop
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", j);
        }
        
    }
    printf("==================================\n");


    n = 10;
    for (int i = n; i > 0; i--)
    {
        printf("%d\n", i);
    }
    printf("==================================\n");
    // i akhirnya bernilai 0
    // nilai perulangan dari awal hingga akhir adalah 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

    // Nested Loop
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        ans = 0;
        for (int j = 0; j < 4; j++)
        {
            ans = ans + 1;
        }
        
    }
    printf("%d\n", ans);
    // nilai dari ans adalah 4, karena setiap iterasi i ans diubah lagi menjadi 0
    printf("==================================\n");

    i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i--;
    }
    // akan terjadi iterasi tanp batas, karena i akan terus berkurang
    printf("==================================\n");

    ans = 0;
    for (int i = 0; i < 10; i++)
    {
        int j = 0;
        while (j < 5)
        {
            ans = ans + j;
        }
        
    }
    
    return 0;
}
