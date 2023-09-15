#include <stdio.h>

float TVA(float prixHT) {
    return prixHT*1.2;
}


int main (){
    float prixBase;
    printf("Veuillez rentrer un prix HT : \n");
    scanf("%f",&prixBase);
    prixBase = TVA(prixBase);
    printf("Voila le prix avec la TVA : %.2f \n", TVA(prixBase));
    return 0;
}
