#include <stdio.h>
#include <stdlib.h>

int main()


{
    // Exo3
/*
    int age;
    printf("Entrez l'age de votre enfant\n");

    scanf("%d", &age);

    if (age < 12){
        printf(" ========= Enfant ==========");
    }

    else  if(age >= 12 && age <= 18){
                printf(" ========= Adolescent ==========");
    }else{
            printf(" ========= Adulte ==========");
    }
    */

    // Exo 2

      int number1;
      int number2;
      int number3;

      printf("Entrez l'age de votre enfant\n");
      scanf("%d", &number1);

       printf("Entrez l'age de votre enfant\n");
      scanf("%d", &number2);

       printf("Entrez l'age de votre enfant\n");
       scanf("%d", &number3);

      if(number1 > number2 && number2> number3){
       printf("le plus grand nombre est %d", number1);
      } else if(number2 > number1 && number1> number3){
        printf(" le plus grand nomre est %d", number2);
      } else if(number3 > number2 && number1> number2){
       printf("le plus grand nombre est %d", number1);

      }


    return 0;
}
