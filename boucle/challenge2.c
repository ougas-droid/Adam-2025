#include <stdio.h>
 
int main (){
 

    int n,i;
    long long fact=1;
    printf("Donner un nombre : ");
    scanf("%d", &n);
    if (n<0) {
    printf("la factorielle n exixte pas pour les nbrs negatif.\n");
    }else{
        for ( i = 1; i <= n ;i++)
        {
            fact=fact *i;
        }
        printf("%d=%lld\n",n, fact);

    }

return 0;
}