#include "structure.c"
#include <stdio.h>

void deleteFacture(int factureID) {
    for (int i = 0; i<10; ++i) {
        if (liste_Facture[i].ID == factureID) {
            liste_Facture[i].ID = -1;
            liste_Facture[i].prixHT = 0;
            liste_Facture[i].prixTTC = 0;
            liste_Facture[i].day = 0;
            liste_Facture[i].month = 0;
            liste_Facture[i].categorie = 0;
            return;
        }
    } printf("La facture n°%d n'a pas été trouvée", factureID);
}
