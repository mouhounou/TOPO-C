#include <stdio.h>
#include <stdlib.h>

int main()
{
    int montant;
    float pourcentage;
    float payer;
    printf("Votre montant :\n");
    scanf("%d", &montant);

    if (montant >100){

        pourcentage =( montant * 10) /100;
        payer = montant - pourcentage;

        printf(" le montant a payer est pour votre remise est de :%f", payer);
    }

    else{
       printf(" le montant payer est :%d", montant);
    }
    return 0;
}
