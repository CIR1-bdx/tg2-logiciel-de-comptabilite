//
// Created by arno.dubois on 15-Sep-23.
//
// Entrée -> id de la facture
// Sortie -> Pas de sortie
//

void deleteFacture(int factureID) {
    char flag;
    for (int i = 0; Factures[i]; ++i) {
        if (Factures[i].ID == factureID) {
            Factures[i].ID = -1;
            Factures.prixHT = 0;
            Factures.prixTTC = 0;
            Factures.date = 0;
            Factures.categorie = 0;

            flag = 1;
        }
    } if(flag == 0) {
        printf("La facture n°%d n'a pas été trouvée", factureID);
    }

}