#include <stdio.h>
int main (){
int base,exposant;
int resultat=1;
int i;
printf("entrer le nombre de base: ");
scanf("%d",&base);
printf("entrer le nombre d exposant : ");
scanf("%d",&exposant);
for (i=1; i<=exposant;i++){
    resultat*=base;
}
printf("%d", resultat);
return 0;

}