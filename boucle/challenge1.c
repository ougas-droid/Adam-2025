#include <stdio.h>

int main () {
int  x;
int  nombre, i;
printf("donner un nombre :");
scanf("%d" , &nombre);
for (i=1; i <=10; i++) 
{
    x = nombre * i;
    printf("%d * %d= %d/ ", nombre, i, x);

}

return 0;
}