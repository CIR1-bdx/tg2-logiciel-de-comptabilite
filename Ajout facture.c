#include <stdio.h>


int ajout_facture (char montant, char categorie, char type, char day, char month, char liste[]){
    if (recherche_place() >= 0){
        liste_Facture[0].prixHT = montant;
        liste_Facture[1].categorie = categorie;
        liste_Facture[2].day = day;
        liste_Facture[3].month = month;
        liste_Facture[4].ID = recherche_place();
        liste_Facture[5].type = type
        liste[recherche_place()] = liste_Facture[] ;
        return 1;

    }else{
        return -1;
    }
}