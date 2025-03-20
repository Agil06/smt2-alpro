/*Nama File 	: CekBilPrima.c*/
/*Deskripsi 	: Memeriksa apakah masukan bilangan prima*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <7:47 PM 3/3/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /*Kamus*/
  int i;
  int n;
  int prime = 0;

  /*Algoritma*/
  printf("============================Prime Checker============================\n");
  printf("Masukkan integer yang akan diperiksa prima nya: ");
  scanf("%d", &n);
    
  if (n <= 0)
  {
      printf("Angka tidak boleh non positif\n");
  }
  else
  {
      for (i = 1; i <= n; i++)
      {
          if (n % i == 0)
          {
              prime++;
          }
      }
      if (prime == 2)
      {
          printf("Bilangan Prima\n");
      }
      else
      {
          printf("Bukan bilangan Prima\n");
      }
  }
  printf("============================PROGRAM SELESAI============================\n");
  return 0;
}

