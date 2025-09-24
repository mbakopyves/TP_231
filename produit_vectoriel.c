#include <stdio.h>
#include <stdlib.h>

void produit_vectoriel() {
    int u[3], v[3], resultat[3], i;
    printf("Entrez les composantes du premier vecteur (3 entiers) : ");
    for(i = 0; i < 3; i++) {
        scanf("%d", &u[i]);
    }
    printf("Entrez les composantes du second vecteur (3 entiers) : ");
    for(i = 0; i < 3; i++) {
        scanf("%d", &v[i]);
    }
    resultat[0] = u[1]*v[2] - u[2]*v[1];
    resultat[1] = u[2]*v[0] - u[0]*v[2];
    resultat[2] = u[0]*v[1] - u[1]*v[0];
    printf("Le produit vectoriel est : (%d, %d, %d)\n", resultat[0], resultat[1], resultat[2]);
}
