#include <stdio.h>
#include "structure.c"


int ajout_facture (char montant, char categorie, char day, char month, char type, char liste[]){
    if (recherche_place() >= 0){
        liste_Facture[recherche_place()].prixHT = montant;
        liste_Facture[recherche_place()].categorie = categorie;
        liste_Facture[recherche_place()].day = day;
        liste_Facture[recherche_place()].month = month;
        liste_Facture[recherche_place()].ID = recherche_place();
        liste_Facture[recherche_place()].type = type
        return 1;

    }else{
        return -1;
    }
}