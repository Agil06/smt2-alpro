/*Nama File 	: CekSegitiga2.c*/
/*Deskripsi 	: Menampilkan ketiga sisi segitiga dan jenis segitiga dengan aturan tambahan*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <6:14 AM 2/25/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /* Kamus */
  float sisi1, sisi2, sisi3; // Variabel untuk menyimpan input
  char term;

  /* Algoritma */
  // Meminta pengguna untuk input
  printf("-------------------------------Pemeriksa Jenis Segitiga-------------------------------\n");
  printf("Masukkan sisi pertama (cm): ");
  if (scanf("%f%c", &sisi1, &term) != 2 || term != '\n' || sisi1 <= 0) { // Memeriksa apakah masukan numerik dan > 0
    printf("Terdapat nilai yang bukan sisi segitiga\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan sisi kedua (cm): ");
  if (scanf("%f%c", &sisi2, &term) != 2 || term != '\n' || sisi2 <= 0) { // Memeriksa apakah masukan numerik dan > 0
    printf("Terdapat nilai yang bukan sisi segitiga\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan sisi ketiga (cm): ");
  if (scanf("%f%c", &sisi3, &term) != 2 || term != '\n' || sisi3 <= 0) { // Memeriksa apakah masukan numerik dan > 0
    printf("Terdapat nilai yang bukan sisi segitiga\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  // Memeriksa apakah jumlah dua sisi lebih besar dari sisi ketiga
  if ((sisi1 + sisi2 <= sisi3) && (sisi1 + sisi3 <= sisi2) && (sisi2 + sisi3 <= sisi1)) {
    printf("Nilai tersebut tidak dapat membentuk segitiga\n");
    return 1;
  }

  // Review masukan, menampilkan jenis segitiga
  printf("--------------------------------------Hasil Pemeriksaan----------------------------------------\n");
  printf("Masukan anda:\n");
  printf("Sisi pertama: %.2f cm\n", sisi1);
  printf("Sisi kedua: %.2f cm\n", sisi2);
  printf("Sisi ketiga: %.2f cm\n", sisi3);
  
  if (sisi1 == sisi2 && sisi2 == sisi3) {
    printf("Nilai tersebut merepresentasikan Segitiga Sama Sisi\n");
  } else if (sisi1 == sisi2 || sisi1 == sisi3 || sisi2 == sisi3) {
    printf("Nilai tersebut merepresentasikan Segitiga Sama Kaki\n");
  } else {
    printf("Nilai tersebut merepresentasikan Segitiga Sembarang\n");
  }

  return 0;
}
