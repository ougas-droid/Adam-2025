#include <stdio.h>
int main(){
char c;
 printf("entrer un caractere : ");
 scanf(" %c", &c);
 switch (c)
 {
 case'a':
     case'e':
    case'i':
    case'o':
    case'u':
    case'A':
    case'E':
    case'I':
    case'O':
 0 case'U':
        printf("%c est une voyelle.\n", c);

    break;
 
 default:
    printf("%c nest pas une voyelle.\n", c);
 }







}
