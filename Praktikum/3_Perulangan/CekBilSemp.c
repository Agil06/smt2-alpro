/*Nama File 	: CekBilSemp.c*/
/*Deskripsi 	: Memeriksa apakah masukan adalah bilangan sempurna*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <1:34 PM 3/5/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main() 
{
    /* Kamus */
    int n;
    int i;
    int sum = 0;

    /* Algoritma */
    printf("============================Apakah Angka Sempurna============================\n");
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
            }
        }
        if (sum - n == n) 
        {
            printf("%d adalah bilangan sempurna\n", n);
        } 
        else 
        {
            printf("%d bukan bilangan sempurna\n", n);
        }
    }
    printf("============================PROGRAM SELESAI============================\n");
    
    return 0;
}
