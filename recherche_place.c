#include "structure.c"



int recherche_place(){
    for (int i = 0; i < 3 ; ++i) {
        if (liste_Facture[i].ID == -1 ){
            return i;
        }

    }
    return -1;
}