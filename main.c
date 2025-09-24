#include <stdio.h>
#include <stdlib.h>
#include "somme_de_matrice.h"
#include "produit_de_matrice.h"
#include "recherche_sequentiel_dans_un_tableau.h"
#include "produit_par_addition.h"
#include "tester_si_un_tableau_est-trie.h"
#include "trouver_le_median_dans-un_tableau.h"
#include "inverser_un_tableau.h"
#include "produit_vectoriel.h"
#include "produit_vecteur_matrice.h"
int main(){
    int choix=0;
    printf("SALUT A VOUS ET HEUREUX DE VOUS VOIRE CHEZ NOUS\n");
    printf("quel operation aimeriez vous exercer aujourdhuit ?!\n\n");
    do{
    printf("1.SOMME DE MATRICE\n");
    printf("2.MULTIPLICATION DE MATRICE\n");
    printf("3.RECHERCHE SEQUENTIEL DANS UN TABLEAU\n");
    printf("4.a*b POUR a,b>0 EN UTILISANT UNIQUEMENT +1\n");
    printf("5.TESTER SI UN TABLEAU EST TRIE\n");
    printf("6. LE MEDIAN DANS UN TABLEAU\n");
    printf("7.INVERSER UN TABLEAU\n");
    printf("8.PRODUIT VECTORIEL\n");
    printf("9.PRODUIT VECTEUR*MATRICE\n");
    printf("10.QUITTER\n");
    printf("choix: ");
    scanf("%d",&choix);
    switch (choix){
    case 1:
        somme_de_matrice();
        break;
    case 2:
        produit_de_matrice();
        break;
    case 3:
        recherche_sequentielle();
        break;
    case 4:
        produit_par_addition();
        break;
    case 5:
        tester_si_trie();
        break;
    case 6:
        trouver_median();
        break;
    case 7:
        inverser_un_tableau();
        break;
    case 8:
        produit_vectoriel();
        break;
    case 9:
        produit_vecteur_matrice();
        break;
    default:
        printf("\n");
        printf("choix invalide! veillez faire a nous un choix qui est compris entre l'intervalle des operation\n\n");
        break;
    }
}while (choix=!10);
    return 0;
}