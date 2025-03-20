/*Nama File 	: volBolaKerct.c*/
/*Deskripsi 	: Menghitung volume bola dan kerucut berdasarkan jari-jari*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <2:38 PM 2/24/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ 
  /* Kamus */
  float jariJari, volumeBola, volumeKerucut; // Variabel untuk menyimpan input dan hasil
  const float phi = 3.1415; // Konstanta phi
  char term;

  /* Algoritma */
  // Meminta pengguna untuk input
  printf("-------------------------------Penghitung Volume Bola dan Kerucut-------------------------------\n");
  printf("Masukkan jari-jari (cm): ");
  if (scanf("%f%c", &jariJari, &term) != 2 || term != '\n' || jariJari <= 0) { // Memeriksa apakah masukan numerik dan lebih dari 0
    printf("Masukan tidak valid (bukan bilangan positif atau integer)\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }

  // Review masukan, menampilkan proses penghitungan, memproses hitungan dan mengeluarkan hasil akhir
  printf("--------------------------------------Hitung hasil----------------------------------------\n");
  printf("Masukan anda:\n");
  printf("Jari-jari: %.2f cm\n", jariJari);
  volumeBola = (4.0 / 3.0) * phi * (jariJari * jariJari * jariJari);
  volumeKerucut = 0.5 * volumeBola;
  printf("Volume Bola adalah: %.2f cm^3\n", volumeBola);
  printf("Volume Kerucut adalah: %.2f cm^3\n", volumeKerucut);

  return 0;
}
