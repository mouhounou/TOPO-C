#include <stdio.h>
#include <stdlib.h>

int main()
{
    int heure;
    int minute;

    printf("entrez une heure : ");
    scanf ("%d", &heure);

    printf ("Entrez les minutes : ");
    scanf("%d", &minute);

    if ( (heure >= 7) && (heure <= 11) && (minute >= 0) && (minute <= 59)){
        printf (" C'est le matin");

        else {
            if ( (heure == 12) && (minute >= 0) && (minute <= 59)){
               printf (" C'est le midi");
                }
                else{
                    if

                }
        }
    }





    if ( (heure >= 13) && (heure <= 17) && (minute >= 0) && (minute <= 59)){
        printf (" C'est l'apres midi");
    }


    if ( (heure >= 18) && (heure <= 6) && (minute >= 0) && (minute <= 59)){
        printf ("C'est le soir");
    }

    if ( (heure >= 0) && (heure <= 6)&& (minute >= 60)){

        printf("le matin");
    }

    if ( (heure >= 24) && (minute >= 0) && (minute <= 59)){

        printf(" Heure erreur");
    }


    if ( (heure >= 24) && (minute >= 60)){

        printf(" Heure erreur");
    }





return 0 ;
}
