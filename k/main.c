#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valeur1;
    int valeur2;
    int addition;
    int multiplication;
    int soustraction;
    float division;
    printf("Entrez une valeur");

    scanf("%d" , &valeur1);

    printf(" Entrez une deuxieme");
    scanf("%d", &valeur2);

    addition = valeur1 + valeur2;
    multiplication = valeur1 * valeur2;
    soustraction = valeur1 - valeur2;
    division = valeur1 / valeur2;

    printf (" la soustraction %d  : \n", soustraction);

    if (multiplication > 30){
        printf(" la multiplication %d : \n", multiplication);

        if(division > 3.14){
            printf(" la division %f : \n", division);
        }

        else if (addition == 30 ){
            printf("l'addition %d : \n", addition);
        }

    }

    return 0;
}
