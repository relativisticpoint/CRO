#include <stdio.h>

int main() {

    int n;
    printf("Merci de rentrer le nombre d'itération souhaité : ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        printf("Itération [%d] : %d\n", i, i*i);
    }
}