/*Nama File 	: namaBulan.c*/
/*Deskripsi 	: Korespondensi integer 1-12 dengan bulan*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <5:57 AM 2/25/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /* Kamus */
  int bulan; // Variabel untuk menyimpan input
  char term;

  /* Algoritma */
  // Meminta pengguna untuk input
  printf("-------------------------------Korespondensi Nomor Bulan-------------------------------\n");
  printf("Masukkan nomor bulan (1-12): ");
  if (scanf("%d%c", &bulan, &term) != 2 || term != '\n' || bulan < 1 || bulan > 12) { // Memeriksa apakah masukan numerik dan dalam rentang 1-12
    printf("Masukan tidak valid (bukan bilangan 1-12)\n"); // Jika bukan angka atau di luar rentang, keluarkan string berikut dan break program
    return 1;
  }

  // Review masukan, menampilkan hasil korespondensi
  printf("--------------------------------------Hasil Korespondensi----------------------------------------\n");
  printf("Masukan anda: %d\n", bulan);
  switch (bulan) {
    case 1:
      printf("Bulan ke-%d adalah Januari\n", bulan);
      break;
    case 2:
      printf("Bulan ke-%d adalah Februari\n", bulan);
      break;
    case 3:
      printf("Bulan ke-%d adalah Maret\n", bulan);
      break;
    case 4:
      printf("Bulan ke-%d adalah April\n", bulan);
      break;
    case 5:
      printf("Bulan ke-%d adalah Mei\n", bulan);
      break;
    case 6:
      printf("Bulan ke-%d adalah Juni\n", bulan);
      break;
    case 7:
      printf("Bulan ke-%d adalah Juli\n", bulan);
      break;
    case 8:
      printf("Bulan ke-%d adalah Agustus\n", bulan);
      break;
    case 9:
      printf("Bulan ke-%d adalah September\n", bulan);
      break;
    case 10:
      printf("Bulan ke-%d adalah Oktober\n", bulan);
      break;
    case 11:
      printf("Bulan ke-%d adalah November\n", bulan);
      break;
    case 12:
      printf("Bulan ke-%d adalah Desember\n", bulan);
      break;
  }

  return 0;
}
