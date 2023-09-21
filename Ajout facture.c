#include <stdio.h>
#include "structure.c"
#include "search_function.c"


int ajout_facture (char montant, char categorie, char day, char month, char type){
    if (searchSpace() >= 0){
        liste_Facture[searchSpace()].prixHT = montant;
        liste_Facture[searchSpace()].categorie = categorie;
        liste_Facture[searchSpace()].day = day;
        liste_Facture[searchSpace()].month = month;
        liste_Facture[searchSpace()].ID = searchSpace();
        liste_Facture[searchSpace()].type = type;
        return 1;

    }else{
        return -1;
    }
}