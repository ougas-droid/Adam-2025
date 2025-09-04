#include <stdio.h>
int main () {
int nombre;
int i;
printf("entrer un nombre : ");
scanf("%d", &nombre);
for (i=1;i <= nombre;i++)
{
if(i %2==0)
{
    printf("%d ",i);
}
    
}
return 0;
}