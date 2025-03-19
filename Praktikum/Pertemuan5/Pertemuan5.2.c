#include <stdio.h>

// procedure
// procedure menampilkan hello world
void helloWorld()
{
    printf("Hello World\n");
}

// procedure menukar nilai a dan b
void tukar(int *a, int *b)
{
    int temp = *a;
    printf("Temp = %p, c = %p, b = %p\n", &temp, *a, *b);
    *a = *b;
    printf("Temp = %p, c = %p, b = %p\n", temp, *a, *b);
    *b = temp;
    printf("Temp = %p, c = %p, b = %p\n", temp, *a, *b);
}

void tukar2(int x, int y) {
    int temp = x;
    printf("Temp = %p, x = %p, y = %p\n", temp, x, y);
    x = y;
    printf("Temp = %p, x = %p, y = %p\n", temp, x, y);
    y = temp;
    printf("Temp = %p, x = %p, y = %p\n", temp, x, y);
}

// function
int tambah(int a, int b)
{
    return a + b;
}

int main()
{
    // Kamus
    int a, b;

    // algoritma
    // printf("%d", *z);
    // printf("%d", z);
    // printf("%p", *z);
    // printf("%p", z);

    helloWorld();

    a = 10; // alamat : 00000000000000A
    b = 20;
    printf("Nilai awal: a = %d, b = %d\n", a, b);
    tukar(&a, &b);
    printf("Nilai setelah ditukar: a = %d, b = %d\n", a, b);

    // alamat a : 000000000000014

    int hasil = tambah(a, b);
    printf("Hasil: %d\n", hasil);

    int x = 5;
    int y = 6;
    printf("Nilai awal: x = %d, y = %d\n", x, y);
    tukar2(x, y);
    printf("Nilai setelah ditukar: x = %p, y = %p\n", x, y);
    printf("Nilai setelah ditukar: x = %d, y = %d\n", x, y);

    int c = a;
    c = 20;
    int *d = &a;
    printf("%p\n", a);
    printf("%p\n", *d);
    printf("%p", d);
    return 0;
}