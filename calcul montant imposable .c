# include <stdio.h>
#include ''

<<<<<<< Updated upstream
int taxable_amount (int sales) {
    printf("Quel est votre chiffre d'affaires? :\n");
    scanf("%d",&sales);
    int taxableamount = sales - (categorie_L + categorie_V);
    return taxableamount;
    printf("Votre montant imposable est de %d euros.\n",taxableamount);
}
=======
int categorie_L = 0;
int categorie_V = 1;

int montant_imposable (int chiffre_affaires) {
    printf("Quel est votre chiffre d'affaires? :\n");
    scanf("%d",&chiffre_affaires);
    int montant_imp = chiffre_affaires - (categorie_L + categorie_V);
    printf("Votre montant imposable est de %d euros.\n",montant_imp);
}
>>>>>>> Stashed changes
