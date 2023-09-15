struct Factures{
    int ID;
    int type; //credit = 0 | debit = 1
    int prixHT;
    int prixTTC;
    int day;
    int month;
    char categorie;
};

struct Factures liste_Facture[3];

int initialisation() {
    for (int i = 0; i < 3; ++i){
        struct Factures factureTemporaire;
        factureTemporaire.ID = -1;
        factureTemporaire.prixHT;
        factureTemporaire.prixTTC;
        factureTemporaire.day;
        factureTemporaire.month;
        factureTemporaire.categorie;
        liste_Facture[i] = factureTemporaire;
    }
    return 0;
}
