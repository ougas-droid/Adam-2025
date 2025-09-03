#include <stdio.h>
#include <stdlib.h>

int main(){
  char nom[50];
  char prenom[50];
  char sexe[100];
  int  age;
  char email[50];
  
  printf("ENTRER VOTRE NOM : ");
  scanf("%s",&nom);
  printf("ENTREZ VOTRE PRENOM : ");
  scanf("%s",&prenom);
  printf("ENTREZ VOTRE SEXE : ");
  scanf("%s", &sexe);
  printf("ENTREZ VOTE AGE : ");
  scanf("%d", &age);
  printf("entrer votre email : ");
  scanf("%s", &email);

  printf("Nom : %s\n", nom);
  printf("Prenom : %s\n", prenom);
  printf("Sexe : %s\n",sexe);
 printf("Age : %d\n",age);
  printf("Email : %s\n",email);


    return 0;
}