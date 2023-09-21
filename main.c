#include <stdio.h>
#include "TVA.c"
#include "recuplistcompt.c"

int main () {
    while (1){
        char choice;
        printf("Que voulez-vous faire? \n");
        printf("1. Calcul TVA\n");
        printf("2. Récupérer catégorie\n");
        printf("3. Ajout de facture\n");
        printf("4. Calcul total jour/mois\n");
        printf("5. Supression de facture\n");
        printf("6. Récupérer facture\n");
        printf("7. Récupérer facture jour/mois\n");
        printf("8. Calcul montant imposable\n");
        printf("9. Sortir\n");

        scanf("%c",&choice);

        switch (choice) {
            case 1: calcul_TVA ();break;
            case 2: list(); break;
            case 3: printf("Veuillez entrer le prix HT, la catégorie, le jour, le mois et le type. \n");
        }
    }

}

