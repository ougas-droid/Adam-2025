#include <stdio.h>
#include <math.h>
int main () {
float volume;
float r;
float pi=3.14;
 printf("Entrer le rayon du cercle : ");
 scanf("%f",&r );
  volume=(4/3)*pi*r*r*r;
printf("le rayon du cercle est : %.2f",volume);


return 0;


}