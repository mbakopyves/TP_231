#include <stdio.h>
#include <stdlib.h>

void inverser_un_tableau() {
    int n, i, tmp;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    for(i = 0; i < n/2; i++) {
        tmp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = tmp;
    }
    printf("Tableau inverse : ");
    for(i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}
