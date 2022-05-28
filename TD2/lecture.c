#include <stdio.h>

int main() {
    
    float number;
    printf("Entrez un flottant : ");
    scanf("%f", &number);
    printf("Vous avez entré : %f\n\n", number);

    int carac;
    while ( ((carac = getchar()) != '\n') && carac != EOF)
        {
        };
    printf("Entrez un caractère : ");

    scanf("%c", &carac);
    printf("Vous avez entré : %c\n\n", carac);

    char string[80];
    while ( ((carac = getchar()) != '\n') && carac != EOF)
        {
        };
    printf("entrez une chaîne: ");
    fgets(string, 80, stdin);
    printf("chaine lue: %s\n", string);
}

