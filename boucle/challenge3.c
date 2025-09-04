#include <stdio.h>
int main (){
int nombre,i;
int somme=0;
printf("donner moi un nombre : ");
scanf("%d", &nombre);
for (i=1; i <= nombre ; i++){
    somme +=i;
}
printf("la somme est : %d\n",somme);
return 0;

}