#include <stdio.h>
#include <stdlib.h>

void produit_de_matrice() {
	int i, j, k, lignes1, colonnes1, lignes2, colonnes2;
	printf("Entrez le nombre de lignes de la premiere matrice : ");
	scanf("%d", &lignes1);
	printf("Entrez le nombre de colonnes de la premiere matrice : ");
	scanf("%d", &colonnes1);
	printf("Entrez le nombre de lignes de la deuxieme matrice : ");
	scanf("%d", &lignes2);
	printf("Entrez le nombre de colonnes de la deuxieme matrice : ");
	scanf("%d", &colonnes2);

	if (colonnes1 != lignes2) {
		printf("Le produit n'est pas possible : le nombre de colonnes de la premiere matrice doit etre egal au nombre de lignes de la deuxieme matrice.\n");
		return;
	}

	int matrice1[lignes1][colonnes1], matrice2[lignes2][colonnes2], produit[lignes1][colonnes2];

	printf("Entrez les elements de la premiere matrice :\n");
	for(i = 0; i < lignes1; i++)
		for(j = 0; j < colonnes1; j++)
			scanf("%d", &matrice1[i][j]);

	printf("Entrez les elements de la deuxieme matrice :\n");
	for(i = 0; i < lignes2; i++)
		for(j = 0; j < colonnes2; j++)
			scanf("%d", &matrice2[i][j]);

	// Initialisation du produit
	for(i = 0; i < lignes1; i++)
		for(j = 0; j < colonnes2; j++)
			produit[i][j] = 0;

	// Calcul du produit
	for(i = 0; i < lignes1; i++) {
		for(j = 0; j < colonnes2; j++) {
			for(k = 0; k < colonnes1; k++) {
				produit[i][j] += matrice1[i][k] * matrice2[k][j];
			}
		}
	}

	printf("Le produit des deux matrices est :\n");
	for(i = 0; i < lignes1; i++) {
		for(j = 0; j < colonnes2; j++)
			printf("%d ", produit[i][j]);
		printf("\n");
	}
}
