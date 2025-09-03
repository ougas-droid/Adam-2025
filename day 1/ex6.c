#include <stdio.h>
int main () {
double a, b;
printf("entrer le premier nombre : ");
scanf("%lf" ,&a);
 printf("entrer le deuxieme nombre : ");
scanf("%lf" ,&b);

printf("\n--- resultats ---\n");
printf("%.2f +%.2f = %.2f\n",a,b, a+b);
printf("%.2f -%.2f = %.2f\n",a,b, a-b);
printf("%.2f *%.2f = %.2f\n",a,b, a*b);
if (b !=0) {
    printf("%.2f /%.2f = %.2f\n",a,b, a/b);
} else {
    printf("impossible (division par zero)\n");
}
return 0;
}