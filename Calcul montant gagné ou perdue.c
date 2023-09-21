#include <stdio.h>
#include "structure.c"
int CalculTotalJoursMois(int JourMoisRechercher){
    int JourMoisRechecher;
    int somme;
    for (int i = 0; i < 10; i++){
        if (JourMoisRechecher ==liste_Facture[i]){
            if (liste_Facture[i].prixHT == 0) {
                return  somme=liste_Facture[i].prixHT;
            } else {
                return 0;
            }
            if (JourMoisRechecher=liste_Facture[i].prixTTC == 1){
                return somme=liste_Facture[i].prixTTC;
            }else{
                return 0;
            }
        } else {
            return 0;
        }
    }
 return 0;
}
