#include <stdio.h>

int main(){
    char d[3];

    for (int i = 0; i < 3; i++){
        scanf(" %c", &d[i]);
    }
    for (int i = 0; i < 3; i++){
        printf("%c\n", d[i]);
    }
}