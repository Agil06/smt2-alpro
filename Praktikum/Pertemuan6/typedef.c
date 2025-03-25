#include <stdio.h>
#include <string.h>

int main() {

    typedef struct {
        char nama[100]; //Gabisa assign string kecuali pake library tambahan
        int umur; 
        char jenisKelamin[50];

    } Manusia; // Harus Kapital awal huruf

    Manusia Filbert;

    Filbert.umur = 55;

    strcpy(Filbert.nama, "Filbert Tampubolon");

    printf("Umur Filbert: %d\n", Filbert.umur);
    printf("%s", Filbert.nama);

    return 0;
}