#include <stdio.h>


int main(void){

    int a[10];
    for (int i = 0; i < 10; i++){
        a[i] = 10;
    }
    for (int i = 0; i < 10; i++){
        printf("%d\n", a[i]);
    }
}