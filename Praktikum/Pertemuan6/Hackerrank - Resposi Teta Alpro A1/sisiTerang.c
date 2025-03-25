#include <stdio.h>

int main() {
    int N;
    int K;
    int jalan[100];
    int i, j;
    int terang[100] = {0};

    scanf("%d %d", &N, &K);

    for (i = 0; i < N; i++) { 
        scanf("%d", &jalan[i]);

        if (jalan[i] == 1) {
            for (j = i - K; j <= i + K; j++) {
                if (j >= 0 && j < N) {
                    terang[j] = 1;
                }
            }
        }
    }
    
    for (i = 0; i < N; i++) {
        if (terang[i] == 0) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}