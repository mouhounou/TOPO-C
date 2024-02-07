#include <stdio.h>
#include <stdlib.h>

int main()
{
    double temperature;
    double convertis;
    int choix;
    printf("Fait un choix entre ces deux temperatures\n \ cliquez\n  1 - celsius \n 2 - fahrenhet \n");
        scanf("%d", &choix);

    if (choix == 1){

        printf("Entrez la temperature : \n");
        scanf("%f", &temperature);
        convertis = (9/5)*temperature + 32;

        printf(" le resultat en celsius est : %f", convertis);
    } else if (choix == 2){
        printf("Entrez la temperature : \n");
        scanf("%f", &temperature);
        convertis =(temperature - 32) * 0.555;
        printf(" le resultat en farhenhet est : %f", convertis);
    }
    return 0;
}
