#include <stdio.h>

int main() {
    // Tipe data
    // Kamus / deklarasi variabel
    int bilangan_bulat; // Tipe data integer / bilangan bulat
    float bilangan_desimal; // Tipe data float / bilangan desimal
    double bilangan_desimal_presisi_tinggi; // Tipe data double / bilangan desimal
    char karakter; // Tipe data char / karakter

    // bilangan bulat
    bilangan_bulat = 10; // insialisasi variabel bilangan_bulat dengan nilai 10
    scanf("%d", &bilangan_bulat); // Input bilangan bulat
    printf("%d\n", bilangan_bulat); // Output bilangan bulat

    // bilangan desimal
    bilangan_desimal = 10.5; // insialisasi variabel bilangan_desimal dengan nilai 10.5
    scanf("%f", &bilangan_desimal); // Input bilangan desimal
    printf("%f\n", bilangan_desimal); // Output bilangan desimal

    // bilangan desimal presisi tinggi
    bilangan_desimal_presisi_tinggi = 10.5; // Inisialisasi variabel bilangan_desimal_presisi_tinggi dengan nilai 10.5
    scanf("%lf", &bilangan_desimal_presisi_tinggi); // Input bilangan desimal
    printf("%lf\n", bilangan_desimal_presisi_tinggi); // Output bilangan desimal

    // karakter
    karakter = 'A'; // inisialisasi variabel karakter dengan nilai 'A'
    scanf(" %c", &karakter); // Input karakter
    printf("%c\n", karakter); // Output karakter

    // ===============Contoh Permasalahan================

    // Operasi bilangan
    int a = 10;
    int b = 2;
    int c = a + b;
    float d = c; // Berapa nilai d?
    double e = d; // Berapa nilai e?
    printf("nilai a adalah: %d\n", &a);
    printf("nilai b adalah: %d\n", &b);
    printf("nilai c adalah: %d\n", &c);
    printf("nilai d adalah: %f\n", &d); // Berapa nilai d?
    printf("nilai e adalah: %lf\n", &e); // Berapa nilai e?


    // operasi karakter
    char f = 'a';
    char g = 'b';
    char h = f + g;
    printf("nilai f adalah: %c\n", f);
    printf("nilai g adalah: %c\n", g);
    printf("nilai h adalah: %c\n", h);
    printf("\n");

    // permasalahannya adalah nilai h tidak sesuai dengan kode ASCII
    printf("nilai f adalah: %d\n", f);
    printf("nilai g adalah: %d\n", g);
    printf("nilai h adalah: %d\n", h);
    printf("\n");
    // nilai h negatif yang tidak mempresentasikan kode ASCII

    // Menukar nilai variabel
    int i = 10;
    int j = 20;
    ptinyf("nilai i adalah: %d\n", i);
    printf("nilai j adalah: %d\n", j);
    int temp = i;
    i = j;
    j = temp;
    printf("nilai i adalah: %d\n", i);
    printf("nilai j adalah: %d\n", j);
    printf("\n");
    return 0;
}
