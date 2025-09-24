#include <stdio.h>
#include <stdlib.h>

void somme_de_matrice() {
    int i, j, lignes, colonnes;
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &colonnes);

    int matrice1[lignes][colonnes], matrice2[lignes][colonnes], somme[lignes][colonnes];

    printf("Entrez les elements de la premiere matrice :\n");
    for(i = 0; i < lignes; i++)
        for(j = 0; j < colonnes; j++)
            scanf("%d", &matrice1[i][j]);

    printf("Entrez les elements de la deuxieme matrice :\n");
    for(i = 0; i < lignes; i++)
        for(j = 0; j < colonnes; j++)
            scanf("%d", &matrice2[i][j]);

    for(i = 0; i < lignes; i++)
        for(j = 0; j < colonnes; j++)
            somme[i][j] = matrice1[i][j] + matrice2[i][j];

    printf("La somme des deux matrices est :\n");
    for(i = 0; i < lignes; i++) {
        for(j = 0; j < colonnes; j++)
            printf("%d ", somme[i][j]);
        printf("\n");
    }
}