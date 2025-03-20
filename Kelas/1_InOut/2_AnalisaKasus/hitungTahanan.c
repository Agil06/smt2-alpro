/*Nama File 	: hitungTahanan.c*/
/*Deskripsi 	: Menjumlahkan tiga integer tanpa negatif*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <6:02 AM 2/25/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /* Kamus */
  float tahanan1, tahanan2, tahanan3, totalTahanan; // Variabel untuk menyimpan input dan hasil
  char term;

  /* Algoritma */
  // Meminta pengguna untuk input
  printf("-------------------------------Penghitung Total Tahanan-------------------------------\n");
  printf("Masukkan nilai tahanan pertama (ohm): ");
  if (scanf("%f%c", &tahanan1, &term) != 2 || term != '\n' || tahanan1 < 0) { // Memeriksa apakah masukan numerik dan >= 0
    printf("Masukan tidak valid (bukan bilangan non-negatif atau integer)\n"); // Jika bukan angka atau < 0, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan nilai tahanan kedua (ohm): ");
  if (scanf("%f%c", &tahanan2, &term) != 2 || term != '\n' || tahanan2 < 0) { // Memeriksa apakah masukan numerik dan >= 0
    printf("Masukan tidak valid (bukan bilangan non-negatif atau integer)\n"); // Jika bukan angka atau < 0, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan nilai tahanan ketiga (ohm): ");
  if (scanf("%f%c", &tahanan3, &term) != 2 || term != '\n' || tahanan3 < 0) { // Memeriksa apakah masukan numerik dan >= 0
    printf("Masukan tidak valid (bukan bilangan non-negatif atau integer)\n"); // Jika bukan angka atau < 0, keluarkan string berikut dan break program
    return 1;
  }

  // Review masukan, menampilkan hasil penjumlahan
  printf("--------------------------------------Hitung hasil----------------------------------------\n");
  printf("Masukan anda:\n");
  printf("Tahanan pertama: %.2f ohm\n", tahanan1);
  printf("Tahanan kedua: %.2f ohm\n", tahanan2);
  printf("Tahanan ketiga: %.2f ohm\n", tahanan3);
  totalTahanan = tahanan1 + tahanan2 + tahanan3;
  printf("Total tahanan adalah: %.2f ohm\n", totalTahanan);

  return 0;
}
