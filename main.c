#include <stdio.h>

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
        factureTemporaire.ID = -1;
        factureTemporaire.prixHT;
        factureTemporaire.prixTTC;
        factureTemporaire.day;
        factureTemporaire.month;
        factureTemporaire.categorie;
        liste_Facture[i] = factureTemporaire;
    }
    return 0;
}

int searchSpace() {
    for (int i = 0; i<10; ++i) {
        if (liste_Facture[i].ID == -1) {
            return i;
        }
    }
    //printf("Plus d'éspace disponible pour les facture");
    return -1;
}

int searchFacture(int factureID) {
    for (int i = 0; i<10; ++i) {
        if (liste_Facture[i].ID == factureID) {
            return i;
        }
    }
    //printf("La facture n°%d n'a pas été trouvée", factureID);
    return -1;
}

void recuperation_facture(int factureID){
    int place = searchFacture(factureID);
    if (liste_Facture[place].ID != -1){
        if (liste_Facture[place].type == 0){
            printf("|Credit | ID: %d | PrixHT: %d | PrixTTC: %d | Date: %d/%d | Categorie: %c |\n",liste_Facture[place].ID,liste_Facture[place].prixHT,liste_Facture[place].prixTTC,liste_Facture[place].day,liste_Facture[place].month,liste_Facture[place].categorie);
        }
        else{
            printf("|Debit | ID: %d | PrixHT: %d | PrixTTC: %d | Date: %d/%d | Categorie: %c |\n",liste_Facture[place].ID,liste_Facture[place].prixHT,liste_Facture[place].prixTTC,liste_Facture[place].day,liste_Facture[place].month,liste_Facture[place].categorie);
        }
        return;
    }
    return;
}

float TVA(float prixHT) {
    return prixHT*1.2;
}

#include <stdlib.h>

int createID() {
    return rand() % (999999 + 1 - 100000) + 100000;
}

int ajout_facture (int montant, char categorie, int day, char month, char type){
    int place = searchSpace();
    if (place >= 0){
        liste_Facture[place].prixHT = montant;
        liste_Facture[place].categorie = categorie;
        liste_Facture[place].day = day;
        liste_Facture[place].month = month;
        liste_Facture[place].ID = createID();
        liste_Facture[place].type = type;
        liste_Facture[place].prixTTC = TVA(montant);
        return liste_Facture[place].ID;

    }else{
        return -1;
    }
}

int Calcule_jour_mois(int daysearch, int monthsearch){
    int sommeGagne = 0;
    int sommePerdu = 0;
    for (int i = 0; i < 10; ++i) {
        if(liste_Facture[i].day == daysearch && liste_Facture[i].month == monthsearch){
            if (liste_Facture[i].type == 0) sommeGagne += liste_Facture[i].prixTTC;
            else if (liste_Facture[i].type == 1) sommePerdu += liste_Facture[i].prixTTC;
        }else if(liste_Facture[i].day == 0 && liste_Facture[i].month == monthsearch) {
            if (liste_Facture[i].type == 0) sommeGagne += liste_Facture[i].prixTTC;
            else if (liste_Facture[i].type == 1) sommePerdu += liste_Facture[i].prixTTC;
        }
    }
    return sommeGagne - sommePerdu;
}

int montant_imposable(){

    int taxable_amount;
    for (int i = 0; i < 10; ++i) {
        if(liste_Facture[i].type == 0 && (liste_Facture[i].categorie == 'L' || liste_Facture[i].categorie == 'V' )){
            taxable_amount += liste_Facture[i].prixTTC ;
        }
    }
    printf("Votre montant imposable est de %d euros.\n",taxable_amount);
    return 0;
}



void deleteFacture(int factureID) {
    for (int i = 0; i<10; ++i) {
        if (liste_Facture[i].ID == factureID) {
            liste_Facture[i].ID = -1;
            liste_Facture[i].prixHT = 0;
            liste_Facture[i].prixTTC = 0;
            liste_Facture[i].day = 0;
            liste_Facture[i].month = 0;
            liste_Facture[i].categorie = 0;
            return;
        }
    } printf("La facture n°%d n'a pas été trouvée", factureID);
}

void factjm (int daysearch, int monthsearch) {
    printf("Factures pour le %02d/%02d/2023 :\n", daysearch, monthsearch);
    for (int i = 0; i < 10; i++) {
        if (liste_Facture[i].day == daysearch && liste_Facture[i].month == monthsearch) {
            printf("Voici: Le numéro de facture : %d\n", liste_Facture[i].ID);
            printf("La date : %02d/%02D/2023\n", daysearch, monthsearch);
            printf("Facture ID: %d", liste_Facture[i].ID);
            printf("Le montant : %.2f\n", liste_Facture[i].prixTTC);
            if (liste_Facture[i].type == 0) {
                printf("C'est une facture de credit\n");
            } else (printf("C'est une facture de debit\n"));
        } else if (liste_Facture[i].day == 0 && liste_Facture[i].month == monthsearch) {
            printf("Voici: Le numéro de facture : %d\n", liste_Facture[i].ID);
            printf("La date : %02d/%02D/2023\n", liste_Facture[i].day, monthsearch);
            printf("Facture ID: %d", liste_Facture[i].ID);
            printf("Le montant : %.2f\n", liste_Facture[i].prixTTC);
            if (liste_Facture[i].type == 0) {
                printf("C'est une facture de credit\n");
            } else (printf("C'est une facture de debit\n"));
        }
    }


}

char list(){
    printf("Categories disponibles: L pour logiciel, N pour nourriture, V pour vehicule, S pour service et A pour autre");
}



int calcul_TVA(){
    float prixBase;
    printf("Veuillez rentrer un prix HT : \n");
    scanf("%f",&prixBase);
    //3prixBase = TVA(prixBase);
    printf("Voila le prix avec la TVA : %.2f \n", TVA(prixBase));
    //return 0;
}



int touteslesfactures() {
    for (int i = 0; i < 10; ++i) {
        recuperation_facture (liste_Facture[i].ID);
    }
};

int main () {
    initialisation();
    while (1){
        int choice;
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

        scanf(" %d",&choice);
        getchar();

        int montant;
        char cat;
        int day = 00;
        int month = 00;
        char type;
        int ID;

        switch (choice) {
            case 1:
                calcul_TVA ();break;
            case 2: list(); break;
            case 3: printf("Veuillez entrer le prix HT : \n");
            scanf("%d",&montant);
                getchar();
            printf("Veuillez entrer la catégorie : \n");
            scanf("%c",&cat);
                getchar();
            printf("Veuillez entrer le jour : \n");
            scanf("%d",&day);
                getchar();
            printf("Veuillez entrer le mois : \n");
            scanf("%d",&month);
                getchar();
            printf("Veuillez entrer le type (0 pour credit, 1 pour debit) : \n");
            scanf(" %c",&type);
            getchar();
            printf("");
            //scanf("");
            getchar();
            int add_facture=ajout_facture (montant,cat,day,month,type);
            if (add_facture == -1){
                printf("Aucune place disponible pour les factures.\n");
            } else {
                recuperation_facture(add_facture);
            }break;
            case 4 : printf("Donnez le jour et le mois : __/__\n");
            scanf("%d",&day);
                getchar();
            scanf("%d",&month);
                getchar();
            int total = Calcule_jour_mois(day,month);
            printf("Le total du %d / %d est de :%d euros.\n",day,month,total);
            break;

            case 5 : printf("Entrez votre ID de facture. Si vous ne l'avez pas, tapez 1. \n");
            scanf("%d",&ID);
                getchar();
            if (ID == 1){
                touteslesfactures ();
                printf("Quel ID choisissez-vous ? : \n");
                scanf("%d", &ID);
                getchar();
            } deleteFacture (ID);break;

            case 6 : printf("Entrez votre ID de facture. Si vous ne l'avez pas, tapez 1. \n");
            scanf(" %d",&ID);
            getchar();
            if (ID == 1){
                touteslesfactures ();
            } else {
                recuperation_facture(ID);
            }break;

            case 7 : printf("Donnez le jour et le mois : __/__\n");
                scanf("%d",&day);
                getchar();
                scanf("%d",&month);
                getchar();
                factjm (day,month);break;

            case 8 : montant_imposable();break;

            case 9 : return 0;

            default:
                printf("Réassaye encore !");
            
        }
    }

}

