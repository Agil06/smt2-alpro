#include <stdio.h>

int main (void)
{
    int i;
    printf("Masukkan nomor bulan: ");
    scanf("%d", &i);
    switch (i)
    {
        case 1:
        printf("Januari");
        break;
        case 2:
        printf("Februari");
        break;
        case 3:
        printf("Maret");
        break;
        case 4:
        printf("April");
        break;
        case 5:
        printf("Mei");
        break;
        case 6:
        printf("Juni");
        break;
        case 7:
        printf("Juli");
        break;
        case 8:
        printf("Agustus");
        break;
        case 9:
        printf("September");
        break;
        case 10:
        printf("Oktober");
        break;
        case 11:
        printf("November");
        break;
        case 12:
        printf("Desember");
        break;
        default:
        printf("Masukan nomor bulan tidak tepat");
    }
}