#include <stdio.h>

int main(){
    int a[10];

    a[9] = 10;
    printf("%d\n", a[9]);

    for (int i = 0; i < 10; i++){
        printf(">%d\n", a[i]);
    }
    // Memang bisa inisialisasi ke elemen ke 10 langsung, dan jika mau print index ke 10 nanti yang keluar juga valid.
    // tapi, nanti kalau kamu coba print elemen ke 1-9, nanti isinya data sampah or garbage value (redundant)
}