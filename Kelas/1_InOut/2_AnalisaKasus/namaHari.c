/*Nama File 	: namaHari.c*/
/*Deskripsi 	: Korespondensi antara integer 1-7 dan hari*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <5:53 AM 2/25/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /* Kamus */
  int hari; // Variabel untuk menyimpan input
  char term;

  /* Algoritma */
  // Meminta pengguna untuk input
  printf("-------------------------------Korespondensi Nomor Hari-------------------------------\n");
  printf("Masukkan nomor hari (1-7): ");
  if (scanf("%d%c", &hari, &term) != 2 || term != '\n' || hari < 1 || hari > 7) { // Memeriksa apakah masukan numerik dan dalam rentang 1-7
    printf("Masukan tidak valid (bukan bilangan 1-7)\n"); // Jika bukan angka atau di luar rentang, keluarkan string berikut dan break program
    return 1;
  }

  // Review masukan, menampilkan hasil korespondensi
  printf("--------------------------------------Hasil Korespondensi----------------------------------------\n");
  printf("Masukan anda: %d\n", hari);
  switch (hari) {
    case 1:
      printf("Hari ke-%d adalah Senin\n", hari);
      break;
    case 2:
      printf("Hari ke-%d adalah Selasa\n", hari);
      break;
    case 3:
      printf("Hari ke-%d adalah Rabu\n", hari);
      break;
    case 4:
      printf("Hari ke-%d adalah Kamis\n", hari);
      break;
    case 5:
      printf("Hari ke-%d adalah Jumat\n", hari);
      break;
    case 6:
      printf("Hari ke-%d adalah Sabtu\n", hari);
      break;
    case 7:
      printf("Hari ke-%d adalah Minggu\n", hari);
      break;
  }

  return 0;
}
