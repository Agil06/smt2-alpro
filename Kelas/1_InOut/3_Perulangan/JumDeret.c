/*Nama File 	: JumDeret.c*/
/*Deskripsi 	: Program yang menerima input, dan akan menjumlahkan sesuai inputan tersebut (Rumus deret aritmatika)*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <10:25 AM 3/3/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /*Kamus*/
  int n;
  int sum = 0;
  
  /*Algoritma*/
  printf("============================Deret Aritmatika============================\n");
  printf("Masukkan n deret yang akan dijumlahkan: ");
  scanf("%d", &n);
  
  if (n <= 0){
      printf("Masukan tidak valid (non positif)\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
            printf("%d ", i);
        }
        printf("\nJumlahnya deret tersebut adalah : %d\n", sum);    
    }
    printf("============================PROGRAM SELESAI============================\n");
    return 0;
}