#include <stdio.h>
#include <stdlib.h>

void trier_tableau(int tab[], int n) {
    int i, j, tmp;
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(tab[i] > tab[j]) {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }
}

void trouver_median() {
    int n, i;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    trier_tableau(tab, n);
    if(n % 2 == 1) {
        printf("Le median est : %d\n", tab[n/2]);
    } else {
        float median = (tab[n/2 - 1] + tab[n/2]) / 2.0;
        printf("Le median est : %.2f\n", median);
    }
}
