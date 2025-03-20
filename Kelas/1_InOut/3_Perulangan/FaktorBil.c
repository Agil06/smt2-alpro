/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: Mengeluarkan semua faktor dari bilangan N yang diinput*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <7:21 PM 3/3/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /*Kamus*/
  int i;
  int n;

  /*Algoritma*/
  printf("============================Faktor Bilangan============================\n");
  printf("Masukkan integer yang akan diperiksa faktornya: ");
  scanf("%d", &n);
    
  printf("Hasilnya adalah: \n"); 
  if (n <= 0)
  {
      printf("Angka tidak boleh non positif");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d ", i);
            }
        } 
    }
    printf("\n");
    printf("============================PROGRAM SELESAI============================\n");
  return 0;
}

