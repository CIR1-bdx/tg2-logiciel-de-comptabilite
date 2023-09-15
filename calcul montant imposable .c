# include <stdio.h>
# include "main.c"

int montant_imposable (int chiffre_affaires) {
    printf("Quel est votre chiffre d'affaires? :\n");
    scanf("%d",&chiffre_affaires);
    int montant_imp;
    montant_imp = chiffre_affaires - (categorie_L + categorie_V);
    return montant_imp;
}