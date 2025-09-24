#include <stdio.h>
#include <stdlib.h>

void produit_par_addition() {
    int a, b, i, resultat = 0;
    printf("Entrez deux entiers positifs a et b : ");
    scanf("%d %d", &a, &b);
    if(a <= 0 || b <= 0) {
        printf("Les valeurs doivent etre strictement positives.\n");
        return;
    }
    for(i = 0; i < b; i++) {
        resultat += a;
    }
    printf("Le produit de %d et %d est : %d\n", a, b, resultat);
}