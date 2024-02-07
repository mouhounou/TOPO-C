#include <stdio.h>
#include <stdlib.h>

int main()
{
    double cote1;
    double cote2;
    double cote3;

    printf("Saisir le premier coter de votre triangle \n");
    scanf("%f",&cote1);

    printf("Saisir le deuxieme coter de votre triangle \n");
    scanf("%f",&cote2);

    printf("Saisir le troisieme coter de votre triangle \n");
    scanf("%f",&cote3);

    if (cote1 == cote2 && cote2 == cote3){
        printf("==== Equilateral");
    } else if ((cote1 == cote2 || cote2 != cote3) || (cote2 == cote3 && cote3 != cote1)) {
        printf("=== Triangle isocèle ====");
    } else if (cote1 != cote2 && cote2 != cote3){
         printf("Triangle scalène");
    }

    return 0;
}
