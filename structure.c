struct Factures{
    int factureID;
    int prixHT;
    int prixTTC;
    char date;
    char categorie;
};

struct Factures T[3];

int initialisation() {
    for (int i = 0; i < 3; ++i){
        struct Factures factureTemporaire;
        factureTemporaire.factureID = i+1;
        factureTemporaire.prixHT;
        factureTemporaire.prixTTC;
        factureTemporaire.date;
        factureTemporaire.categorie;
        T[i] = factureTemporaire;
    }
    return 0;
}
