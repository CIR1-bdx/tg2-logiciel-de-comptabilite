
int CalculTotalJoursMois(int TotalGagne,int TotalDepense){
    struct Factures liste_Facture[3];
    int JourMoisRecherche;
    int TotalGagne;
    int TotalDepense;
    for (int i = 0; i < JourMoisRecherche; i++){
        if (Factures.date == JourMoisRecherche){
            if (Factures.type == 0){
                TotalGagne =+ Factures.type;
                return TotalGagne;
            }else{TotalDepense =+ Factures.type;
                return TotalDepense;
            }
        }else{
            return 0;
        }
    }
}
int main(){
        int JourMoisRechecher;
        int TotalGagne;
        int TotalDepense;
        printf("veuillez saisir le jour ou mois que vous desirez savoir le montant gagnat et perdue:\n");
        scantf("%d", &JourMoisRechecher);
        printf("le total gagné et dépensé:\n",CalculTotalJoursMois(TotalGagne,TotalDepense));
return 0
};
