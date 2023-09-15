#include <stdio.h>


int ajout_facture (char montant, char categorie, char date, char liste[]){
    if (recherche_place() >= 0){
<<<<<<< HEAD
        liste_Facture[recherche_place()].prixHT = montant;
        liste_Facture[recherche_place()].categorie = categorie;
        liste_Facture[recherche_place()].day = day;
        liste_Facture[recherche_place()].month = month;
        liste_Facture[recherche_place()].ID = recherche_place();
        liste_Facture[recherche_place()].type = type
=======
        T[0].prixHT = montant;
        T[1].prixTTC =
        T[2] = categorie;
        T[3] = date;
        T[4] = recherche_place();
        liste[recherche_place()] = T[] ;
>>>>>>> d56b3cbc95fad984db6013b2b10fc3489cd50c3f
        return 1;

    }else{
        return -1;
    }
}