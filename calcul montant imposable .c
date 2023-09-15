# include <stdio.h>
#include ''

int montant_imposable (int chiffre_affaires) {
    printf("Quel est votre chiffre d'affaires? :\n");
    scanf("%d",&chiffre_affaires);
    int montant_imp = chiffre_affaires - (categorie_L + categorie_V);
    return montant_imp;
    printf("Votre montant imposable est de %d euros.\n",montant_imp);
}