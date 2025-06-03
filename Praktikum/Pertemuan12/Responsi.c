#include <stdio.h>

void InsertionSort(int T[], int N)
    {
    int i;
    int pass;
    int temp;
    for (pass = 1; pass < N; pass++)
    {
        temp = T[pass];
        i = pass - 1;
        while (i >= 0 && temp < T[i])
        {
            T[i+1] = T[i];
            i--;
        }
        T[i+1] = temp;
    }
}

double median(int arr[], int n)
{
    InsertionSort(arr, n);
    if (n % 2 == 1)
    {
        return arr[n / 2];
    } else {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
}

int main()
    {
    int N;
    scanf("%d", &N);

    int ganjil[100000];
    int genap[100000];
    int countGanjil = 0;
    int countGenap = 0;

    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            genap[countGenap++] = x;
        } else {
            ganjil[countGanjil++] = x;
        }
    }

    double hasil;
    if (countGanjil == 0 && countGenap == 0)
    {
        printf("No data\n");
        return 0;
    } else if (countGanjil == 0)
    {
        hasil = median(genap, countGenap);
    } else if (countGenap == 0) {
        hasil = median(ganjil, countGanjil);
    } else {
        double medianGanjil = median(ganjil, countGanjil);
        double medianGenap = median(genap, countGenap);
        hasil = (medianGanjil + medianGenap) / 2.0;
    }

    printf("%.3lf\n", hasil);
    return 0;
}
