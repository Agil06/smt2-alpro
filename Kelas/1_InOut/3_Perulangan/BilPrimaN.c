/*Nama File 	: BilPrimaN.c*/
/*Deskripsi 	: Mencetak bilangan prima dari 1 sampai n*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <1:44 PM 3/5/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
  /*Kamus*/
  int i;
  int j;
  int n;
  int isPrime;

  /*Algoritma*/
  printf("============================Bil Prima dibawah N============================\n");
  printf("Masukkan integer yang akan menjadi batas batas bilangan prima yang dikeluarkan: ");
  scanf("%d", &n);

  if (n > 1)
  {
    printf("Bilangan prima di sampai dengan %d adalah: ", n);
    for (i = 2; i <= n; i++)
    {
        isPrime = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime++;            
              }
        }
        if (isPrime == 2)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
  }
  else
  {
    printf("Masukan tidak boleh non positif atau 1\n");
  }

  printf("============================PROGRAM SELESAI============================\n");
  return 0;
}
