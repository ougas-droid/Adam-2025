#include <stdio.h> 
int main () {
double T;

printf("Entrer la temperature en degres celsius : ");
scanf("%lf" , &T);

if (T<0) {

    printf("A %.2f °C, etat solide.\n", T); 
}
else if (T >=0 && T < 100 ){
    printf("A %.2f °C, etat liquide.\n", T);
}
else {
printf("A %.2f °C, etat gazeux (vapeur).\n" , T);
}

return 0;

}