/*Nama File 	: cekBilAll.c*/
/*Deskripsi 	: Memeriksa apakah masukan adalah bilangan sempurna, Bilangan Prima atau Bilangan biasa*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <10:16 AM 3/10/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main() 
{
    /* Kamus */
    int n;
    int i;
    int sum = 0;
    int faktor = 0;

    /* Algoritma */
    printf("============================Apakah Sempurna, Prima atau Biasa============================\n");
    printf("Masukkan bilangan yang akan diperiksa: ");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Angka tidak boleh non-positif\n");
    } 
    else 
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0) 
            {
                sum += i;
                faktor += 1;
            }
        }
        if (sum - n == n) 
        {
            printf("%d adalah bilangan sempurna\n", n);
        }
        else if (faktor == 2){
            printf("Bilangan Prima\n");
        }
        else 
        {
            printf("%d Adalah bilangan biasa\n", n);
        }
    }
    printf("============================PROGRAM SELESAI============================\n");
    
    return 0;
}
