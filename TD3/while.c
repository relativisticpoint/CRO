#include <stdio.h>

int mult() {
    int res;
    while(res != 15)
    {
        printf("3 x 5 = ");
        scanf("%d", &res);
    }
}

int main() {

    mult();
    
    printf("Bravo !\n");
}