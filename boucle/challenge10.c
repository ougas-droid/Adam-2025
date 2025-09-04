#include <stdio.h>
int main () {
int n,i,somme=0,valeur;

printf("entrer un nombre : ");
scanf("%d",&n);

for (i=1;i<=n;i++)
{   valeur=somme+i;
    printf("%d + %d =%d\n",somme,i,valeur);
    somme=valeur;  
}

printf("la somme des entiers natureles est : %d" ,somme);
return 0;
}