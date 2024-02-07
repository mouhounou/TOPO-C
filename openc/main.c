#include <stdio.h>
#include <stdlib.h>



int menu()
{
 int choix = 0;

 while (choix < 1 || choix > 4)
 {
 printf(" ==== Menu ====\n\n");
 printf("1 : Poulet de dinde aux escargots rotis a la sauce bearnaise\n");
 printf("2 : Concombres sucres a la sauce de myrtilles enrobee de chocolat\n");
 printf("3 : Escalope de kangourou saignante et sa gelee aux fraises poivree\n");
 printf("4 : La surprise du Chef (j'en salive d'avance...)\n");
 printf("Votre choix ? ");
 scanf("%d", &choix);
 }

 return choix;
}




/*double aireRectangle(double largeur, double hauteur)
{
 return largeur * hauteur;
}




void punition(int nombreDeLignes)
{
 int i;

 for (i = 0 ; i < nombreDeLignes ; i++)
 {
 printf("Je ne dois pas copier sur mon voisin\n");
 }
}*/


// comprendre  les fonctions
//int triple(int nombre)
//{
//return 3 * nombre;
//}



int main(int argc, char *argv[]){



switch (menu())
 {
 case 1:
 printf("Vous avez pris le poulet\n");
 break;
 case 2:
 printf("Vous avez pris les concombres\n");
 break;
 case 3:
 printf("Vous avez pris l'escalope\n");
 break;
 case 4:
 printf("Vous avez pris la surprise du Chef. Vous etes un sacre aventurier dites donc!\n");
 break;
 }


/*{

  printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n", aireRectangle(5, 10));
  printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
  printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));

*/
   // punition(10);



  /*int nombreEntre = 0, nombreTriple = 0;

   printf("Entrez un nombre... ");
   scanf("%d", &nombreEntre);

   nombreTriple = triple(nombreEntre);
   printf("Le triple de ce nombre est %d\n", nombreTriple);

   */

/* la boucle while = tant que
   int nombreEntre = 0;
  while (nombreEntre != 47)
{
 printf("Tapez le nombre 47 ! ");
 scanf("%d", &nombreEntre);
} */



   /*printf ("  === Menu === \n\n");

   int one = printf("  1 Royal cheese \n") ;
   int two = printf ("  2 Mc Deluxe \n");
   int three = printf ("  3 Mc Bacon \n");
   int four = printf ("  4 Big Mac\n\n");

   int choice = printf ("  votre choix  ?\n\n");



    scanf ("%d, &choice");

    switch (choice ){

        case choice == 1: printf ("Votre royal sera bientot pret");
                            break;
    }*/
 return 0;


}

