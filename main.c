#include <stdio.h>

int sapin(int x) {
    int etage = x;
    int feuille = 1;
    int etoile = 1;
    int espace = etage - 1;
    int espace2 = etage - 1;

    for (int j = 1; j <= espace2; j++) {
        printf(" ");
    }
    for(int jj = 0; jj < etoile; jj++) {
        printf("+\n");
    }

    for (int compteur = 1; compteur <= etage; compteur++) {
        for (int i = 0; i<espace; i++){
            printf(" ");
        }

        for (int i = 1; i<= feuille; i++) {
            printf("*");
        }
        espace = espace - 1;
        feuille = feuille + 2;
        printf("\n");
    }

    for (float compteur =  2; compteur <= etage; compteur = compteur + 2) {
        for (float jj = 1; jj <= etage; jj = jj + 2) {
            printf(" ");
        }
        printf("#");
        for (int z = 3; z < etage; z = z + 2 ) {
            printf("##");
        }
        printf("\n");

    }
}

int main(){
    int nbetage = 0;
    printf("combien d'etage ?\n");
    scanf("%d",&nbetage);
    sapin(nbetage);
    return 0;
}