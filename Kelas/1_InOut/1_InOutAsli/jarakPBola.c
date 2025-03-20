/*Nama File 	: jarakPBola.c*/
/*Deskripsi 	: Rumus mencari jarak parabola*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <12:10 PM 2/24/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ 
  /* Kamus */
  float kecepatanAwal, waktu, jarak; // Variabel untuk menyimpan input dan hasil
  const float gravitasi = 9.81; // Konstanta percepatan gravitasi
  char term;

  /* Algoritma */
  // Meminta pengguna untuk input
  printf("-------------------------------Penghitung Jarak Parabola-------------------------------\n");
  printf("Masukkan kecepatan awal (m/s): ");
  if (scanf("%f%c", &kecepatanAwal, &term) != 2 || term != '\n' || kecepatanAwal < 0) { // Memeriksa apakah masukan numerik dan >= 0
    printf("Masukan tidak valid (bukan bilangan non-negatif atau integer)\n"); // Jika bukan angka atau < 0, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan waktu (s): ");
  if (scanf("%f%c", &waktu, &term) != 2 || term != '\n' || waktu < 0) { // Memeriksa apakah masukan numerik dan >= 0
    printf("Masukan tidak valid (bukan bilangan non-negatif atau integer)\n"); // Jika bukan angka atau < 0, keluarkan string berikut dan break program
    return 1;
  }

  // Review masukan, menampilkan proses penghitungan, memproses hitungan dan mengeluarkan hasil akhir
  printf("--------------------------------------Hitung hasil----------------------------------------\n");
  printf("Masukan anda:\n");
  printf("Kecepatan awal: %.2f m/s\n", kecepatanAwal);
  printf("Waktu: %.2f s\n", waktu);
  jarak = kecepatanAwal * waktu - 0.5 * gravitasi * (waktu * waktu);
  printf("Hasil jarak parabola adalah: %.2f meter\n", jarak);

  return 0;
}
