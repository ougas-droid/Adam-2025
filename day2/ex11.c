#include <stdio.h>
#include <math.h>

int main () {
    float longueur;
    float largeur;
    float surface;

    printf("Entrer la longueur : ");
    scanf("%f", &longueur);
     printf("Entrer la largeur : ");
    scanf("%f", &largeur);

    surface= longueur*largeur;

    printf("la surface  est : %.2f", surface);


return 0;
}