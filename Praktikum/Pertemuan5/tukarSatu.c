#include <stdio.h>

void Tukar(int *a, int *b) {
    printf("===============Step 2===============\n");
    printf("Proses : a dan b di main masuk ke prosedur 'Tukar' dan menginisiasi 'temp'\n");
    int temp;
    printf("Parameter di prosedur 'Tukar':\n");
    printf("[*a]\nAlamat *a = %p\nNilai *a = %d\n", a, a);
    printf("[*b]\nAlamat *b = %p\nNilai *b = %d\n", b, b);
    printf("\nAlamat yang diambil oleh parameter:\n");
    printf("[a]\nAlamat a = %p\nNilai a = %d\n", *a, *a);
    printf("[b]\nAlamat b = %p\nNilai b = %d\n", *b, *b);
    printf("[temp]\nAlamat temp = %p\nNilai temp = %d\n", temp, temp);

    printf("\n===============Step 3===============\n");
    printf("Proses : Memasukkan a ke temp\n");
    temp = *a;
    printf("Alamat parameter:\n");
    printf("[*a]\nAlamat *a = %p\nNilai *a = %d\n", a, a);
    printf("[*b]\nAlamat *b = %p\nNilai *b = %d\n", b, b);
    printf("\nAlamat yang diambil oleh parameter:\n");
    printf("[a]\nAlamat a = %p\nNilai a = %d\n", *a, *a);
    printf("[b]\nAlamat b = %p\nNilai b = %d\n", *b, *b);
    printf("[temp]\nAlamat temp = %p\nNilai temp = %d\n", temp, temp);

    printf("\n===============Step 4===============\n");
    printf("Proses : Memasukkan b ke a\n");
    *a = *b;
    printf("Alamat parameter:\n");
    printf("[*a]\nAlamat *a = %p\nNilai *a = %d\n", a, a);
    printf("[*b]\nAlamat *b = %p\nNilai *b = %d\n", b, b);
    printf("\nAlamat yang diambil oleh parameter:\n");
    printf("[a]\nAlamat a = %p\nNilai a = %d\n", *a, *a);
    printf("[b]\nAlamat b = %p\nNilai b = %d\n", *b, *b);
    printf("[temp]\nAlamat temp = %p\nNilai temp = %d\n", temp, temp);

    printf("\n===============Step 5===============\n");
    printf("Proses : Memasukkan temp ke b\n");
    *b = temp;
    printf("Alamat parameter:\n");
    printf("[*a]\nAlamat *a = %p\nNilai *a = %d\n", a, a);
    printf("[*b]\nAlamat *b = %p\nNilai *b = %d\n", b, b);
    printf("\nAlamat yang diambil oleh parameter:\n");
    printf("[a]\nAlamat a = %p\nNilai a = %d\n", *a, *a);
    printf("[b]\nAlamat b = %p\nNilai b = %d\n", *b, *b);
    printf("[temp]\nAlamat temp = %p\nNilai temp = %d\n", temp, temp);
}

int main() {
    printf("===============Step 1===============\n");
    printf("Proses : Inisialisasi\n");
    int a = 10;
    int b = 20;
    printf("[a]\nAlamat a = %p\nNilai a = %d\n", a, a);
    printf("[b]\nAlamat b = %p\nNilai b = %d\n", b, b);
    Tukar(&a, &b);

    printf("\n===============Step 6===============\n");
    printf("Proses : Hasil akhir di main\n");
    printf("[a]\nAlamat a = %p\nNilai a = %d\n", a, a);
    printf("[b]\nAlamat b = %p\nNilai b = %d\n", b, b);

    return 0;
}
