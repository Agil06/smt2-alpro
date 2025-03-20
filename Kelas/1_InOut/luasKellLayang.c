/*Nama File 	: luasKellLayang.c*/
/*Deskripsi 	: Menghitung luas dan keliling layang-layang berdasarkan sisi dan diagonalnya*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <2:50 PM 2/24/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ 
  /* Kamus */
  float sisi1, sisi2, diagonal1, diagonal2, luasLayang, kelilingLayang; // Variabel untuk menyimpan input dan hasil
  char term;

  /* Algoritma */
  // Meminta pengguna untuk input
  printf("-------------------------------Penghitung Luas dan Keliling Layang-Layang-------------------------------\n");
  printf("Masukkan sisi pertama (cm): ");
  if (scanf("%f%c", &sisi1, &term) != 2 || term != '\n' || sisi1 <= 0) { // Memeriksa apakah masukan numerik dan lebih dari 0
    printf("Masukan tidak valid (bukan bilangan positif atau integer)\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan sisi kedua (cm): ");
  if (scanf("%f%c", &sisi2, &term) != 2 || term != '\n' || sisi2 <= 0) { // Memeriksa apakah masukan numerik dan lebih dari 0
    printf("Masukan tidak valid (bukan bilangan positif atau integer)\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  // Menghitung keliling layang-layang
  kelilingLayang = 2 * (sisi1 + sisi2);
  printf("Keliling layang-layang adalah: %.2f cm\n", kelilingLayang);

  printf("Masukkan diagonal pertama (cm): ");
  if (scanf("%f%c", &diagonal1, &term) != 2 || term != '\n' || diagonal1 <= 0) { // Memeriksa apakah masukan numerik dan lebih dari 0
    printf("Masukan tidak valid (bukan bilangan positif atau integer)\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan diagonal kedua (cm): ");
  if (scanf("%f%c", &diagonal2, &term) != 2 || term != '\n' || diagonal2 <= 0) { // Memeriksa apakah masukan numerik dan lebih dari 0
    printf("Masukan tidak valid (bukan bilangan positif atau integer)\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  // Menghitung luas layang-layang
  luasLayang = 0.5 * diagonal1 * diagonal2;
  printf("Luas layang-layang adalah: %.2f cm^2\n", luasLayang);

  return 0;
}
