/*Nama File    : JumFrekNilTabel.c*/
/*Deskripsi    : Menampilkan jumlah nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali*/
/*Pembuat      : 24060124120045-Agil Yudis Wibawa*/
/*Tgl Pembuatan: 6:45 AM 3/18/2025*/


#include <stdio.h> /*header file*/

/*Program Utama*/
int main() {
    /*Kamus*/
    int T[10];
    int frekuensi[101] = {0};
    int i;
    int jumlah;
    
    /*Algoritma*/
    printf("Program Penghitung Jumlah Elemen dengan Frekuensi > 1\n");
    printf("Masukkan 10 bilangan bulat (tiap bilangan harus positif): \n");
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &T[i]);
        frekuensi[T[i]]++;
    }
    
    jumlah = 0;
    for (i = 0; i < 10; i++) {
        if (frekuensi[T[i]] > 1) {
            jumlah += T[i];
            frekuensi[T[i]] = 0;
        }
    }
    
    printf("\nJumlah elemen yang frekuensinya lebih dari satu: %d", jumlah);
    
    return 0;
}
