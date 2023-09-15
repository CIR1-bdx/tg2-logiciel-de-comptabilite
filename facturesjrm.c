#include <stdio.h>

struct Facture{
    int day;
    int month;
    int nmbr;
    int price;
};

void billdaymonth (struct Facture factures[],int billnumber,int daysearch, int monthsearch){
    printf("Factures pour le %02d/%02d/2023 :\n",daysearch,monthsearch);
    for (int i = 0; i < billnumber; i++){
        if (factures[i].day == daysearch && factures[i].month == monthsearch) {
            printf("Voici: Le numéro de facture : %d\n", factures[i].nmbr);
            printf("La date : %02d/%02D/2023\n",daysearch,monthsearch);
            printf("Le montant : %.2f\n", factures[i].price);}}}