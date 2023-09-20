struct Factures{
    int ID;
    int type; //credit = 0 | debit = 1
    int prixHT;
    int prixTTC;
    int day;
    int month;
    char categorie;
};

struct Factures liste_Facture[10];

int initialisation() {
    for (int i = 0; i < 10; ++i){
        struct Factures factureTemporaire;
        factureTemporaire.ID;
        factureTemporaire.prixHT;
        factureTemporaire.prixTTC;
        factureTemporaire.day;
        factureTemporaire.month;
        factureTemporaire.categorie;
        liste_Facture[i] = factureTemporaire;
    }
    return 0;
}
