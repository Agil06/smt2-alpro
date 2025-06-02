#include <stdio.h>

int main() {
    int TABINT[100] = {2, 3, 7, 10, 100};
    int NMK = 5;
    int MKX = 11; // Nilai yang ingin ditambahkan
    int i, j;

    // Cari posisi penyisipan
    i = 0;
    while (i < NMK && TABINT[i] < MKX) {
        i++;
    }

    // Cek apakah tabel penuh
    if (NMK >= 100) {
        printf("tabelpenuh\n");
    }
    // Cek apakah sudah ada
    else if (i < NMK && TABINT[i] == MKX) {
        printf("Udah ada\n");
    }
    // Sisipkan dan geser elemen
    else {
        for (j = NMK; j > i; j--) {
            TABINT[j] = TABINT[j-1];
        }
        TABINT[i] = MKX;
        NMK = NMK + 1;
    }

    // Cetak tabel terurut
    for (int k = 0; k < NMK; k++) {
        printf("%d ", TABINT[k]);
    }
    printf("\n");

    return 0;
}


