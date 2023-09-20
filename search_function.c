//
// Created by arno.dubois on 20-Sep-23.
//

#include "structure.c"
#include <stdio.h>

int searchSpace() {
    for (int i = 0; i<10; ++i) {
        if (liste_Facture[i].ID == -1) {
            return i;
        }
    } return -1;
}

int searchFacture(int factureID) {
    for (int i = 0; i<10; ++i) {
        if (liste_Facture[i].ID == factureID) {
            return i;
        }
    }
    printf("La facture n°%d n'a pas été trouvée", factureID);
    return -1;
}