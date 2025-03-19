#include <stdio.h>

int main(){
    int a[10];

    for (int i = 1; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < 10; i++){
        printf("A%d\n", a[i]);
    }
}