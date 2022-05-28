#include <stdio.h>

#define N 5

int produit_scalaire(int A[N], int B[N]) {
    float res;
    for (int i = 0; i < N; i++)
        res += A[i] * B[i];

    return res;
}

int main() {
    int vec1[N] = {1, 2, 3, 4, 5};
    int vec2[N] = {1, 2, 3, 4, 5};

    int prod = produit_scalaire(vec1, vec2);

    printf("%d", prod);
}