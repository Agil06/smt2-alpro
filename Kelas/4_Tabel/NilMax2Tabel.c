/*Nama File 	: NilMax2Tabel*/
/*Deskripsi 	: Menampilkan nilai maksimum kedua dari suatu integer*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <8:57 AM 3/11/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /*Kamus*/
  int i;
  int tabelInteger[10];
  int max1, max2;

  /*Algoritma*/
  for (i = 0; i < 10; i++){
    scanf(" %d", &tabelInteger[i]);
  }

  max1 = max2 = tabelInteger[0];

  // Find the maximum value
  for (i = 0; i < 10; i++){
    if (tabelInteger[i] > max1) {
      max2 = max1;
      max1 = tabelInteger[i];
    } else if (tabelInteger[i] > max2 && tabelInteger[i] != max1) {
      max2 = tabelInteger[i];
    }
  }

  printf("Nilai maksimum kedua adalah: %d\n", max2);

  return 0;
}
