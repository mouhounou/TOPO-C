#include <stdio.h>
#include <stdlib.h>

int main()
{

      int number1;
      int number2;
      int number3;

      printf("Entrez un nommbre\n");
      scanf("%d", &number1);

       printf("Entrez le second\n");
       scanf("%d", &number2);

       printf("Entrez le troiiemen \n");
       scanf("%d", &number3);


      if(number1 > number2 && number1 >number3){
       printf("le plus grand nombre est %d", number1);
      }
       if(number2 > number1 && number2> number3){
        printf(" le plus grand nomre est %d", number2);
      }
       if(number3 > number2 && number3> number1){
       printf("le plus grand nombre est %d", number1);

      }
    return 0;
}
