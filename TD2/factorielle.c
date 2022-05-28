#include <stdio.h>

int factorielle(int n)
{
    int i, fact=1;

    for (i = 1; i<=n; i++)
        fact *= i;
    
    return fact;
}

int main() {

    int res = factorielle(10);

    printf("Factorielle de 10 : %d\n", res);

}