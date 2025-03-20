/*Nama File 	: jarakGLBB.c*/
/*Deskripsi 	: Rumus menghitung jarak GLBB.*/
/*Pembuat   	: <24060124120045>*/
/*Tgl Pembuatan	: <11:21 AM 2/24/2025>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /* Kamus */
    float kecepatanAwal, waktu, percepatan, jarak; // Variabel untuk menyimpan input dan hasil
    char term;

    /* Algoritma */
    // Meminta pengguna untuk input
    printf("-------------------------------Penghitung Jarak GLBB-------------------------------\n");
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

    printf("Masukkan percepatan (m/s^2): ");
    if (scanf("%f%c", &percepatan, &term) != 2 || term != '\n') { // Memeriksa apakah masukan numerik
        printf("Masukan tidak valid (bukan bilangan atau integer)\n"); // Jika bukan angka, keluarkan string berikut dan break program
        return 1;
    }

    // Review masukan, menampilkan proses penghitungan, memproses hitungan dan mengeluarkan hasil akhir
    printf("--------------------------------------Hitung hasil----------------------------------------\n");
    printf("Masukan anda:\n");
    printf("Kecepatan awal: %.2f m/s\n", kecepatanAwal);
    printf("Waktu: %.2f s\n", waktu);
    printf("Percepatan: %.2f m/s^2\n", percepatan);
    jarak = kecepatanAwal * waktu + 0.5 * percepatan * (waktu * waktu);
    printf("Hasil jarak GLBB adalah: %.2f meter\n", jarak);

    return 0;
}

