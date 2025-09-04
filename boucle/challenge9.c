#include <stdio.h>

int main() {
    long long  n;
    int count=0;

    printf("entrer les chiffres: ");
    scanf("%lld",&n);
    if(n==0) {
    count=1;
    }else{
        if(n<0){
n=-n;   
    }
while(n>0){
n=n/10;
count++;
}
    }
    printf("le nombre de chiffres est : %d\n",count);
return 0;
}