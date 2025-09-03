#include <stdio.h>
#include <math.h>
int main () {
 float x1,x2;
 float y1,y2;
 float z1,z2;
 float distance;
printf("Entrer les coordonnes du premier point (x1 ,x2 ,x3 ) : ");
scanf("%f %f %f", &x1,&y1,&z1);
printf("Entrer les coordonnes du deuxieme point : ");
scanf("%f %f %f", &x2,&y2,&z2);
distance = sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1));
printf("distance=%.2f\n",distance);
return 0;





}