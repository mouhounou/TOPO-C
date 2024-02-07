#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    int password ;
    int i = 0; //

    do {

        printf(" Entrez  mot de passe: \n");
        scanf("%d", &password);
          i++;



        if (i>2 && password != 1234){
                    printf("============= erreur =========");
                break;
            }
        }while(password != 1234);

        if(password == 1234){

            printf ("\n   ============ Bienvenu dans le menu  JADOUDOU ========= \n     \n Taper \n \n   1 - pour Creer \n   2 - pour modifier \n   3 - pour supprimer \n   4 - pour selectionner \n ");
            scanf("%d", &choice);



            while (choice > 4 ||choice <1){

                printf(" Entrez le bon nombre \n");
                scanf("%d",&choice);
            }

            switch(choice){

                case 1: {
                        printf(" ====== Creation d'un nouveau menu ========");
                        break;
                       }

                case 2: {
                        printf(" ====== Modification d'un menu =========");
                        break;
                       }

                 case 3: {
                        printf(" ====== Suppression d'un menu =========");
                        break;
                       }

                case 4: {
                        printf(" ====== Selection d'un menu =========");
                        break;
                       }

                }

            }


    return 0;
}
