//
// Created by arno.dubois on 15-Sep-23.
//
// Fonction pour créer un id aléatoire
// Entrée -> pas d'entrée
// Sortie -> id aléatoire de type entier
//

#include <stdlib.h>

int createID() {
    return rand() % (999999 + 1 - 100000) + 100000;
}
