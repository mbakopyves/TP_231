#include <stdio.h>
#include <stdlib.h>

void produit_vecteur_matrice() {
    int n, m, i, j;
    printf("Entrez le nombre de colonnes de la matrice (et la taille du vecteur) : ");
    scanf("%d", &n);
    printf("Entrez le nombre de lignes de la matrice : ");
    scanf("%d", &m);
    int vecteur[n], matrice[n][m], resultat[m];
    printf("Entrez les elements du vecteur :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &vecteur[i]);
    }
    printf("Entrez les elements de la matrice (%d colonnes x %d lignes) :\n", n, m);
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }
    for(j = 0; j < m; j++) {
        resultat[j] = 0;
        for(i = 0; i < n; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }
    printf("Le resultat du produit vecteur x matrice est : ");
    for(j = 0; j < m; j++) {
        printf("%d ", resultat[j]);
    }
    printf("\n");
}