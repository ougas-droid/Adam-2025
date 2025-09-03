#include <stdio.h>
#include <math.h>

int main() {
float n1;
float n2;
float n3;
float moyenne;
  printf("Entrer le premier nombre : ");
  scanf("%f", &n1);
  printf("Entrer le deuxieme nombre : ");
  scanf("%f", &n2);
  printf("Entrer le troixieme nombre : ");
  scanf("%f", &n3);
   moyenne= cbrt(n1*n2*n3);
   printf( "la moyenne est :%.2f\n",moyenne);
   return 0;
  



}