#include <stdio.h>

int main() {

    int n; //Banyak elemen pada tabel untuk masukan

    printf(" ");
    scanf("%d", &n);

    int N[n]; //Elemen kotak

    for (int i = 0; i < n; i++) {
        printf("");
        scanf("%d", &N[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (N[i] % 2 == 1){
            printf("%d", N[i]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (N[i] % 2 == 0){
            printf("%d", N[i]);
        }
    }
    return 0;
}