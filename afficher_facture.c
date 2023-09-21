#include "search_function.c"

void recuperation_facture(int factureID){
    int place = searchFacture(factureID);
    if (place != 1){
        if (liste_Facture[place].type == 0){
            printf("|Credit | ID: %d | PrixHT: %d | PrixTTC: %d | Date: %d/%d | Categorie: %c |",liste_Facture[place].ID,liste_Facture[place].prixHT,liste_Facture[place].prixTTC,liste_Facture[place].day,liste_Facture[place].month,liste_Facture[place].categorie);
        }
        else{
            printf("|Debit | ID: %d | PrixHT: %d | PrixTTC: %d | Date: %d/%d | Categorie: %c |",liste_Facture[place].ID,liste_Facture[place].prixHT,liste_Facture[place].prixTTC,liste_Facture[place].day,liste_Facture[place].month,liste_Facture[place].categorie);
        }
    }
    return;
}
