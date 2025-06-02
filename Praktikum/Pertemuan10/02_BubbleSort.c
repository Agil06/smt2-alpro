//Nama File         : Bubble Sort
//Deskripsi         : Algoritma Bubble Sort
//Pembuat           : 24060124120045 - Agil Yudis Wibawa
//Tanggal Pembuatan : Rabu, 20 Mei 2024

#include <stdio.h>

void BubbleSort(int T[], int N){
    // Kamus Lokal
    int i, k;
    int pass;
    int temp;

    // Algoritma
    for (pass = 0; pass < N-1; pass++){
        printf("Pass %d: ", pass+1);
        for (i = 0; i < N; i++) {
            printf("%d ", T[i]);
        }
        printf("\n");

        for (k = N-1; k >= pass+1; k--){
            printf("    k = %d: ", k); // Trace k value
            for (i = 0; i < N; i++) {
                printf("%d ", T[i]);
            }
            printf("\n");
            if (T[k] < T[k-1]){
                printf("      Swap %d and %d\n", T[k], T[k-1]);
                temp = T[k];
                T[k] = T[k-1];
                T[k-1] = temp;
            }
        }
    }

    printf("Hasil akhir: ");
    for (i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
    printf("\n");
}

int main(){
    // Kamus Lokal
    int T[7] = {5, 4, 7, 6, 2, 3, 1};
    int N = 7;

    // Algoritma
    // Sebelum Sorting
    printf("Sebelum Sorting : ");
    for (int i = 0; i < N; i++){
        printf("%d ", T[i]);
    }

    // Sesudah Sorting
    printf("\nSesudah Sorting : ");
    BubbleSort(T, N);

    return 0;
}