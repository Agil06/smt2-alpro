/*Nama File    : SimetriTabel.c*/
/*Deskripsi    : Menentukan apakah dua tabel T1 dan T2 simetri atau tidak*/
/*Pembuat      : 24060124120045-Agil Yudis Wibawa*/
/*Tgl Pembuatan: 7:20 AM 3/18/2025*/


#include <stdio.h> /*header file*/

/*Program Utama*/
int main() {
    /*Kamus*/
    int T1[10], T2[10];
    int panjangT1, panjangT2;
    int i;
    int simetri;
    
    /*Algoritma*/
    printf("Program Pengecekan Simetri Tabel\n");
    
    printf("Masukkan ukuran T1: ");
    scanf("%d", &panjangT1);
    printf("Masukkan elemen T1: ");
    for (i = 0; i < panjangT1; i++) {
        scanf("%d", &T1[i]);
    }
    
    printf("Masukkan ukuran T2: ");
    scanf("%d", &panjangT2);
    printf("Masukkan elemen-elemen T2: ");
    for (i = 0; i < panjangT2; i++) {
        scanf("%d", &T2[i]);
    }
    
    simetri = 1;
    if (panjangT1 != panjangT2) {
        simetri = 0;
    } else {
        for (i = 0; i < panjangT1; i++) {
            if (T1[i] != T2[i]) {
                simetri = 0;
                break;
            }
        }
    }
    
    if (simetri) {
        printf("T1 dan T2 Simetri\n");
    } else {
        printf("T1 dan T2 Tidak Simetri\n");
    }
    
    return 0;
}
