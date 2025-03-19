#include <stdio.h>

int main()
{
    // Kamus Lokal
    int a[10]; // array of integer dengan panjang 10
    float b[10]; // array of float dengan panjang 10
    double c[10]; // array of double dengan panjang 10
    char d[10]; // array of char dengan panjang 10
    
    // Algoritma

    // inisialisasi elemen array
    a[0] = 10; // inisialisasi nilai a[0] dengan 10
    b[1] = 10.5; // inisialisasi nilai b[1] dengan 10.5
    c[2] = 10.5; // inisialisasi nilai c[2] dengan 10.5
    d[3] = 'A'; // inisialisasi nilai d[3] dengan 'A'

    // input elemen array
    scanf("%d", &a[0]); // input nilai a[0]
    scanf("%f", &b[1]); // input nilai b[1]
    scanf("%lf", &c[2]); // input nilai c[2]
    scanf(" %c", &d[3]); // input nilai d[3]

    // output elemen array
    printf("%d\n", a[0]); // output nilai a[0]
    printf("%f\n", b[1]); // output nilai b[1]
    printf("%lf\n", c[2]); // output nilai c[2]
    printf("%c\n", d[3]); // output nilai d[3]

    //  input elemen dengan for
    for (int i = 0; i < 10; i++)
    {
        a[i] = 10; // input nilai a[i]
    }

    // output elemen dengan for
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]); // output nilai a[i]
    }

    a[10] = 9; // error, karena indeks array dimulai dari 0 sampai N-1
    // a[11] = 1;
    printf("%d\n", a[11]); // error, karena indeks array dimulai dari 0 sampai N-1
    return 0;
}
