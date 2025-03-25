#include <stdio.h>

int main() {
    int A, B, C, D;
    int bulan = 0;
    int sisaMakan;
    int jumMakan;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    while (A > 0 || B > 0 || C > 0 || D > 0) {
        bulan++;
        sisaMakan = 3;

        if (A > 0 || B > 0) {
            if (A > 0) {
                if (A >= sisaMakan) {
                    jumMakan = sisaMakan;
                } else {
                    jumMakan = A;
                }
                A -= jumMakan;
                sisaMakan -= jumMakan;
            } else {
                if (B >= sisaMakan) {
                    jumMakan = sisaMakan;
                } else {
                    jumMakan = B;
                }
                B -= jumMakan;
                sisaMakan -= jumMakan;
            }
        }

        if ((C > 0 || D > 0) && sisaMakan > 0) {
            if (C > 0) {
                if (C >= sisaMakan) {
                    jumMakan = sisaMakan;
                } else {
                    jumMakan = C;
                }
                C -= jumMakan;
                sisaMakan -= jumMakan;
            } else {
                if (D >= sisaMakan) {
                    jumMakan = sisaMakan;
                } else {
                    jumMakan = D;
                }
                D -= jumMakan;
                sisaMakan -= jumMakan;
            }
        }
    }

    printf("%d\n", bulan);
    return 0;
}