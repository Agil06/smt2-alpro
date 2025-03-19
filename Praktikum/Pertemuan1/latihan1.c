#include <stdio.h>

int main(void)
{
    //Soal nomor satu
    int a = 10;
    int b = 2;
    int c = a + b;
    float d = c;
    double e = d;

    printf("%d\n", c);
    printf("%f\n", d);
    printf("%lf\n", e);

    //Soal nomor dua
    char f = 'a';
    char g = 'b';
    char h = f + g;
    printf("nilai f adalah: %c\n", f);
    printf("nilai g adalah: %c\n", g);
    printf("nilai h adalah: %c\n", h);

    //Soal nomor 3
    a = 65;
    printf("nilai a adalah: %c\n", a);

    return 0;
}
