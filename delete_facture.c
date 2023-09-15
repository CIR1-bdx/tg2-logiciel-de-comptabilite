//
// Created by arno.dubois on 15-Sep-23.
//
// Fonction pour supprimer une facture
// Entrée -> id de la facture à supprimer de type entier
// Sortie -> Pas de sortie
//

void deleteFacture(int factureID) {
    for (int i = 0; Factures[i]; ++i) {
        if (Factures[i].ID == factureID) {
            Factures[i].ID = -1;
            Factures.prixHT = 0;
            Factures.prixTTC = 0;
            Factures.date = 0;
            Factures.categorie = 0;

            return;
        }
    } printf("La facture n°%d n'a pas été trouvée", factureID);
}
