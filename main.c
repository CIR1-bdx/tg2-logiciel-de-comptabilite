#include <stdio.h>
#include "TVA.c"
#include "recuplistcompt.c"
#include "Ajout facture.c"
#include "Calcul montant gagné ou perdue.c"
#include "delete_facture.c"
#include "afficher_facture.c"
#include "facturesjrm.c"
#include "calcul montant imposable.c"


int touteslesfactures() {
    for (int i = 0; i < 10; ++i) {
        recuperation_facture (liste_Facture[i].ID);
    }
};






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

        int montant;
        char cat;
        char day = 00;
        char month = 00;
        char type;
        int ID;

        switch (choice) {
            case 1: calcul_TVA ();break;
            case 2: list(); break;
            case 3: printf("Veuillez entrer le prix HT : \n");
            scanf("%d",&montant);
            printf("Veuillez entrer la catégorie : \n");
            scanf("%c",&cat);
            printf("Veuillez entrer le jour : \n");
            scanf("%c",&day);
            printf("Veuillez entrer le mois : \n");
            scanf("%c",&month);
            printf("Veuillez entrer le type (0 pour credit, 1 pour debit) : \n");
            scanf("%c",&type);
            int add_facture=ajout_facture (montant,cat,day,month,type);
            if (add_facture == -1){
                printf("Aucune place disponible pour les factures.\n");
            } else {

            }
            case 4 : printf("Donnez le jour et le mois : __/__\n");
            scanf("%d",&day);
            scanf("%d",&month);
            int total = Calcule_jour_mois(day,month);
            printf("Le total du %d / %d est de :%d euros.\n",day,month,total);
            break;

            case 5 : printf("Entrez votre ID de facture. Si vous ne l'avez pas, tapez 1. \n");
            scanf("%d",&ID);
            if (ID == 1){
                touteslesfactures ();
                printf("Quel ID choisissez-vous ? : \n");
                scanf("%d", &ID);
            } deleteFacture (ID);

            case 6 : printf("Entrez votre ID de facture. Si vous ne l'avez pas, tapez 1. \n");
            scanf("%d",&ID);
            if (ID == 1){
                touteslesfactures ();
            } else {
                recuperation_facture(ID);
            }

            case 7 : printf("Donnez le jour et le mois : __/__\n");
                scanf("%d",&day);
                scanf("%d",&month);
                factjm (day,month);

            case 8 : montant_imposable();
            
        }
    }

}

