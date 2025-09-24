#include <stdio.h>

void tester_si_trie() {
    int n, i, estTrie = 1;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    for(i = 0; i < n - 1; i++) {
        if(tab[i] > tab[i+1]) {
            estTrie = 0;
            break;
        }
    }
    if(estTrie)
        printf("Le tableau est trie dans l'ordre croissant.\n");
    else
        printf("Le tableau n'est pas trie.\n");
}
