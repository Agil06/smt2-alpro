/*Nama File 	: kalkSS.c*/
/*Deskripsi 	: Kalkulator sederhana*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <6:22 AM 2/25/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /* Kamus */
  int a, b; // Variabel untuk menyimpan input
  char operasi; // Variabel untuk menyimpan operasi
  char term;

  /* Algoritma */
  // Meminta pengguna untuk input
  printf("-------------------------------Kalkulator Sederhana-------------------------------\n");
  printf("Masukkan nilai pertama: ");
  if (scanf("%d%c", &a, &term) != 2 || term != '\n') { // Memeriksa apakah masukan numerik
    printf("Masukan tidak valid (bukan bilangan integer)\n"); // Jika bukan angka, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan nilai kedua: ");
  if (scanf("%d%c", &b, &term) != 2 || term != '\n') { // Memeriksa apakah masukan numerik
    printf("Masukan tidak valid (bukan bilangan integer)\n"); // Jika bukan angka, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan kode operasi (a-f): ");
  if (scanf(" %c%c", &operasi, &term) != 2 || term != '\n' || (operasi < 'a' || operasi > 'f')) { // Memeriksa apakah masukan valid
    printf("Masukan tidak valid (bukan kode operasi yang benar)\n"); // Jika bukan kode operasi yang benar, keluarkan string berikut dan break program
    return 1;
  }

  // Review masukan, menampilkan hasil operasi
  printf("--------------------------------------Hasil Operasi----------------------------------------\n");
  printf("Masukan anda: %d, %d, %c\n", a, b, operasi);
  switch (operasi) {
    case 'a':
      printf("Hasil penjumlahan %d dan %d adalah %d\n", a, b, a + b);
      break;
    case 'b':
      printf("Hasil pengurangan %d dan %d adalah %d\n", a, b, a - b);
      break;
    case 'c':
      printf("Hasil perkalian %d dan %d adalah %d\n", a, b, a * b);
      break;
    case 'd':
      if (b == 0) {
        printf("Pembagian dengan nol tidak diperbolehkan\n");
      } else {
        printf("Hasil pembagian %d dan %d adalah %.2f\n", a, b, (float)a / b);
      }
      break;
    case 'e':
      if (b == 0) {
        printf("Pembagian dengan nol tidak diperbolehkan\n");
      } else {
        printf("Hasil div %d dan %d adalah %d\n", a, b, a / b);
      }
      break;
    case 'f':
      if (b == 0) {
        printf("Pembagian dengan nol tidak diperbolehkan\n");
      } else if (a > 0) {
        printf("Hasil modulo %d dan %d adalah %d\n", a, b, (a % b));
      }
      else {
        printf("Hasil modulo %d dan %d adalah %d\n", a, b, ((a % b) + b));
      }
      break;
  }

  return 0;
}
