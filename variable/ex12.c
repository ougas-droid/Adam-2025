#include <stdio.h>
#include <math.h>

int main () {

int inverse ;
int num1;

printf ("entrer quatre nombre : ");
scanf("%d",&num1 );

inverse =(num1%10)*1000;
inverse +=(num1/10%10)*100;
inverse +=(num1/100%10)*10;
inverse +=(num1/1000);

printf("inverse des nombres est : %d", inverse);



return 0;
}