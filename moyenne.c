#include <stdio.h>

int main() 
{
    
    int i, nbr_moy;
    i=0;
    nbr_moy=0;
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
    i=0;
    while(i<5)
    {
        if(note[i]>=moyenne)
            nbr_moy++;
        i++;
    }
    /*Affichage de la moyenne*/
    printf("La moyenne de la classe est de %.1f\n",moyenne);
    printf("Le nombre d'élèves à avoir obtenu la moyenne est de %d", nbr_moy);
    
  return 0; 
}