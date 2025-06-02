/*Nama File 	: TugasSearching1.c*/
/*Deskripsi 	: Tugas searching soal pertama - 
                  Algoritma sekuensial search menggunakan sentinel, dari tabel
                  Yang terurut mengecil ascending  */
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <5:38 PM 5/20/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /*Kamus*/
  int TabInt[7] = {15, 2, 7, 5, 6, 6}; // Tambah 1 untuk sentinel
  int N = 6; // jumlah data efektif
  int X;
  int IX = 0;

  /* Algoritma */

  TabInt[N] = 6; // Pasang sentinel di akhir

  int i = 0;
  while (TabInt[i] != X) {
      i++;
  }
  if (i < N) {
      IX = i; // Ditemukan di data asli
  } else {
      IX = -1; // Tidak ditemukan
  }
  printf("IX = %d\n", IX);

  return 0;
}
