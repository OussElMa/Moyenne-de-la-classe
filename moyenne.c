#include <stdio.h>

int main() 
{
    
    int i;
    i=0;
    float note[5] = {12,12,12,10,10};
/*  while(i<=5)
    {
        printf("L'élève numéro %d a eu ", i);
        scanf("%d",&note[i]);
        i++;
    }
*/
    float moyenne;
    moyenne=0;
    
    /*Somme de tout les points */
    while(i<5)
    {
        moyenne=moyenne+note[i];
        i++;
    }
    moyenne = moyenne/5;
    /*Affichage de la moyenne*/
    printf("La moyenne de la classe est de %.1f",moyenne);
  return 0; 
}