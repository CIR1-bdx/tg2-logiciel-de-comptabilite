# include <stdio.h>
//# include "structure.c"

int montant_imposable(){

    int taxable_amount;
    for (int i = 0; i < 10; ++i) {
        if(liste_Facture[i].type == 0 && (liste_Facture[i].categorie == 'L' || liste_Facture[i].categorie == 'V' )){
            taxable_amount += liste_Facture[i].prixTTC ;
        }
    }
    printf("Votre montant imposable est de %d euros.\n",taxable_amount);
    return 0;
}
