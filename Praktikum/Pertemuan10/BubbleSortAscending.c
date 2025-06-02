/*Nama File 	: BubbleSortAscending.c*/
/*Deskripsi 	: Algoritma bubble sort mengurutkan integer dari yang terkecil sampai terbesar*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <9:05 AM 5/20/2025>*/

#include <stdio.h> /*header file*/

void BubbleSort(int T[], int N){
    // Kamus Lokal
    int i, k;
    int pass;
    int temp;

    // Algoritma
    for (pass = 0; pass < N-1; pass++){
        for (k = N-1; k >= pass+1; k--){
            if (T[k] > T[k-1]){
                temp = T[k];
                T[k] = T[k-1];
                T[k-1] = temp;
            }
        }
    }

    for (i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
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