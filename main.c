#include <stdio.h>

float TVA(float prixHT) {
    return prixHT*1.2;
}

char list(char categories){
    printf("Categories disponibles: L pour logiciel, N pour nourriture, V pour vehicule, S pour service et A pour autre");
}


int main (){
    float prixBase;
    printf("Veuillez rentrer un prix HT : \n");
    scanf("%f",&prixBase);
    prixBase = TVA(prixBase);
    printf("Voila le prix avec la TVA : %.2f \n", TVA(prixBase));
    return 0;
}
