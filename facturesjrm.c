#include <stdio.h>
//#include "structure.c"

// si le jour est le 0 alors c'est tout le mois
void factjm (int daysearch, int monthsearch) {
    printf("Factures pour le %02d/%02d/2023 :\n", daysearch, monthsearch);
    for (int i = 0; i < 10; i++) {
        if (liste_Facture[i].day == daysearch && liste_Facture[i].month == monthsearch) {
            printf("Voici: Le numéro de facture : %d\n", liste_Facture[i].ID);
            printf("La date : %02d/%02D/2023\n", daysearch, monthsearch);
            printf("Facture ID: %d", liste_Facture[i].ID);
            printf("Le montant : %.2f\n", liste_Facture[i].prixTTC);
            if (liste_Facture[i].type == 0) {
                printf("C'est une facture de credit\n");
            } else (printf("C'est une facture de debit\n"));
        } else if (liste_Facture[i].day == 0 && liste_Facture[i].month == monthsearch) {
            printf("Voici: Le numéro de facture : %d\n", liste_Facture[i].ID);
            printf("La date : %02d/%02D/2023\n", liste_Facture[i].day, monthsearch);
            printf("Facture ID: %d", liste_Facture[i].ID);
            printf("Le montant : %.2f\n", liste_Facture[i].prixTTC);
            if (liste_Facture[i].type == 0) {
                printf("C'est une facture de credit\n");
            } else (printf("C'est une facture de debit\n"));
        }
    }


}