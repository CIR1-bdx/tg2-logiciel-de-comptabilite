# include <stdio.h>
#include ''

int taxable_amount (int sales) {
    printf("Quel est votre chiffre d'affaires? :\n");
    scanf("%d",&sales);
    int taxableamount = sales - (categorie_L + categorie_V);
    return taxableamount;
    printf("Votre montant imposable est de %d euros.\n",taxableamount);
}
