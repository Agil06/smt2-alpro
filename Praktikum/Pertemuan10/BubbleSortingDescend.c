/*Nama File 	: BubbleSortDescending.c*/
/*Deskripsi 	: Algoritma bubble sort mengurutkan integer dari yang terbesar ke terkecil*/
/*Pembuat   	: <24060124120008-Amelia Aristiabnti>*/
/*Tgl Pembuatan	: <9:21 AM 5/20/2025>*/

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
                temp = T[k]; // kalo yg kanan lebih kecil dari yg kiri dia tetep 6 4 3
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
    int T[7] = {7, 1, 5, 5, 3, 4, 6};
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