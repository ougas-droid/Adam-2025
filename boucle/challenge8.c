#include <stdio.h>
int main(){
int nombre,i;



printf("entrer un nombre : ");
scanf("%d", &nombre);
 printf("les %d premier terme de la suite de fibanacci sont :\n" ,nombre);

int n1 = 0, n2 = 1, n3;
 for(i=0; i<= nombre-1; i++){

   printf("%d",n1);
   n3 = n1 + n2;
   n1 = n2;
   n2 = n3;
 }

return 0;
}