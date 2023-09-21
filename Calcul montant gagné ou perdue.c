#include <stdio.h>
//#include "structure.c"

int Calcule_jour_mois(int daysearch, int monthsearch){
    int sommeGagne = 0;
    int sommePerdu = 0;
    for (int i = 0; i < 10; ++i) {
        if(liste_Facture[i].day == daysearch && liste_Facture[i].month == monthsearch){
            if (liste_Facture[i].type == 0) sommeGagne += liste_Facture[i].prixTTC;
            else if (liste_Facture[i].type == 1) sommePerdu += liste_Facture[i].prixTTC;
        }else if(liste_Facture[i].day == 0 && liste_Facture[i].month == monthsearch) {
            if (liste_Facture[i].type == 0) sommeGagne += liste_Facture[i].prixTTC;
            else if (liste_Facture[i].type == 1) sommePerdu += liste_Facture[i].prixTTC;
        }
    }
    return sommeGagne - sommePerdu;
}

