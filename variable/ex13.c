#include <stdio.h>
#include <stdlib.h>

int main () {
    int num;
    char binary[33];
    printf("entrer le nombre pour connaitre sa valeur en binaire : ");
    scanf("%d",&num);
    printf(" le nombre en format hexadicimale: %X\n", num);

    itoa(num,binary,2);
    printf("le nombre en binaire est :%s", binary);
    

    return 0;





}