/*Nama File 	: BiayaKirim.c*/
/*Deskripsi 	: Program ini menghitung total tarif pengiriman suatu barang berdasarkan dua variabel, 
yaitu berat barang dan jarak pengiriman. Untuk setiap kilogram berat akan dikalikan 5000 rupiah dan untuk tiap kilometer
jarak akan dikalikan 2000.*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <2:57 PM 2/24/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
  /*Kamus*/
  float berat, jarak, totalBiaya;
  char term;

  /*Algoritma*/
  //Meminta pengguna untuk input
  printf("---------------------------------Penghitung Biaya Kirim---------------------------------\n");
  printf("Masukkan berat barang (dalam kilogram): ");
  if (scanf("%f%c", &berat, &term) != 2 || term != '\n' || berat <= 0) { // Memeriksa apakah masukan numerik dan lebih dari 0
    printf("Masukan tidak valid (bukan bilangan positif atau integer)\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }
  
  printf("Masukkan jarak pengiriman (dalam kilometer): ");
  if (scanf("%f%c", &jarak, &term) != 2 || term != '\n' || jarak <= 0) { // Memeriksa apakah masukan numerik dan lebih dari 0
    printf("Masukan tidak valid (bukan bilangan positif atau integer)\n"); // Jika bukan angka atau <= 0, keluarkan string berikut dan break program
    return 1;
  }
  
  //Review masukan, menampilkan proses penghitungan, memproses hitungan dan mengeluarkan hasil akhir
  printf("--------------------------------------Hitung hasil----------------------------------------\n");
  printf("Masukan anda:\n");
  printf("Berat: %.2f kilogram\n", berat);
  printf("Jarak: %.2f kilometer\n", jarak);
  totalBiaya = 10000 + (5000 * berat) + (2000 * jarak);
  printf("Total biaya adalah (%.2f * 5000 + %.2f * 2000) = %.2f rupiah.\n", berat, jarak, totalBiaya);

  return 0;
}