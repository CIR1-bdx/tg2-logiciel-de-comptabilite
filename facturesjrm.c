#include <stdio.h>
#include "structure.c"

struct Factures;


void factjm (struct Factures factures[],int factnmbr,int daysearch, int monthsearch){
    printf("Factures pour le %02d/%02d/2023 :\n",daysearch,monthsearch);
    for (int i = 0; i < factnmbr; i++){
        if (factures[i].day == daysearch && factures[i].month == monthsearch) {
            printf("Voici: Le numéro de facture : %d\n", factures[i].ID);
            printf("La date : %02d/%02D/2023\n",daysearch,monthsearch);
            printf("Le montant : %.2f\n", factures[i].prixTTC);}}}