#include "search_function.c"
//#include "create_id.c"
//#include "TVA.c"


int ajout_facture (int montant, char categorie, char day, char month, char type){
    int place = searchSpace();
    if (place >= 0){
        liste_Facture[place].prixHT = montant;
        liste_Facture[place].categorie = categorie;
        liste_Facture[place].day = day;
        liste_Facture[place].month = month;
        liste_Facture[place].ID = searchSpace();
        liste_Facture[place].type = type;
        liste_Facture[place].prixTTC = TVA(montant);
        return liste_Facture[place].ID;

    }else{
        return -1;
    }
}