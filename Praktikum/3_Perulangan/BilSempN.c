/*Nama File 	: BilSempN.c*/
/*Deskripsi 	: Menampilkan semua bilangan sempurna di bawah n*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <1:35 PM 3/5/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main() 
{
    /* Kamus */
    int n; 
    int i; 
    int j;
    int sum;

    /* Algoritma */
    printf("============================Bil Sempurna Dibawah N============================\n");
    printf("Masukkan batas bilangan: ");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Angka tidak boleh non-positif\n");
    } 
    else 
    {
        printf("Bilangan sempurna di bawah %d adalah: ", n);
        for (i = 1; i < n; i++) 
        {
            sum = 0;
            for (j = 1; j < i; j++) 
            {
                if (i % j == 0) 
                {
                    sum += j;
                }
            }
            if (sum == i) 
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    printf("============================PROGRAM SELESAI============================\n");
    
    return 0;
}
