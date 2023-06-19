#include <stdio.h>

long int Fak_Rekursif(int N);

int main()
{
    int N = 5;
    printf("%d faktorial = %ld\n", N, Fak_Rekursif(N));
    return 0;
}

long int Fak_Rekursif(int N)
{
    long int F;
    if (N <= 1) {
        return 1;
    } else {
        F = N * Fak_Rekursif(N - 1);
        return F;
    }
}

