/*Nama File 	: gayaSentr.c*/
/*Deskripsi 	: Menghitung gaya sentripetal berdasarkan massa, kecepatan, dan jari-jari*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <2:18 PM 2/24/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ 
  /* Kamus */
  float massa, kecepatan, jariJari, gayaSentripetal; // Variabel untuk menyimpan input dan hasil
  char term;

  /* Algoritma */
  // Meminta pengguna untuk input
  printf("-------------------------------Penghitung Gaya Sentripetal-------------------------------\n");
  printf("Masukkan massa (kg): ");
  if (scanf("%f%c", &massa, &term) != 2 || term != '\n' || massa <= 0) { // Memeriksa apakah masukan numerik dan lebih dari 0
    printf("Masukan tidak valid (bukan bilangan positif atau integer)\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan kecepatan (m/s): ");
  if (scanf("%f%c", &kecepatan, &term) != 2 || term != '\n' || kecepatan <= 0) { // Memeriksa apakah masukan numerik dan lebih dari 0
    printf("Masukan tidak valid (bukan bilangan positif atau integer)\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  printf("Masukkan jari-jari (m): ");
  if (scanf("%f%c", &jariJari, &term) != 2 || term != '\n' || jariJari <= 0) { // Memeriksa apakah masukan numerik dan lebih dari 0
    printf("Masukan tidak valid (bukan bilangan positif atau integer)\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  // Review masukan, menampilkan proses penghitungan, memproses hitungan dan mengeluarkan hasil akhir
  printf("--------------------------------------Hitung hasil----------------------------------------\n");
  printf("Masukan anda:\n");
  printf("Massa: %.2f kg\n", massa);
  printf("Kecepatan: %.2f m/s\n", kecepatan);
  printf("Jari-jari: %.2f m\n", jariJari);
  gayaSentripetal = massa * ((kecepatan * kecepatan) / jariJari);
  printf("Hasil Gaya Sentripetal adalah: %.2f N\n", gayaSentripetal);

  return 0;
}
