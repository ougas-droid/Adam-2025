#include <stdio.h>
int main() {
double km, yards;
printf("Entrer la distance en kilometres : ");
scanf("%lf" , &km);

yards = km * 1093.61;

printf("%.2f kilometres = %.2f yards\n", km, yards);




return 0;
}