/*Nama File    : JumBarKolMat.c*/
/*Deskripsi    : Menjumlahkan semua elemen pada setiap baris dan kolom dalam matriks*/
/*Pembuat      : 6:23 AM 3/18/2025*/
/*Tgl Pembuatan: 24060124120045-Agil Yudis Wibawa*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main() {
    /*Kamus*/
    int T[3][3];
    int i, j;
    int jumlahBaris[3] = {0};
    int jumlahKolom[3] = {0};
    
    /*Algoritma*/
    printf("Program Penjumlahan Elemen pada Baris dan Kolom Matriks\n");
    printf("Masukkan elemen matriks 3x3:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &T[i][j]);
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            jumlahBaris[i] += T[i][j];
            jumlahKolom[j] += T[i][j];
        }
    }
    
    for (i = 0; i < 3; i++) {
        printf("Jumlah baris ke-%d: %d\n", i + 1, jumlahBaris[i]);
    }
    
    for (j = 0; j < 3; j++) {
        printf("Jumlah kolom ke-%d: %d\n", j + 1, jumlahKolom[j]);
    }
    
    return 0;
}