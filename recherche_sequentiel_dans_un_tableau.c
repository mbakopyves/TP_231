#include <stdio.h>

void recherche_sequentiellee() {
    int n, i, valeur, trouve = 0;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    printf("Entrez la valeur a rechercher : ");
    scanf("%d", &valeur);
    for(i = 0; i < n; i++) {
        if(tab[i] == valeur) {
            printf("Valeur %d trouvee a la position %d\n", valeur, i);
            trouve = 1;
        }
    }
    if(!trouve) {
        printf("Valeur %d non trouvee dans le tableau.\n", valeur);
    }
}
