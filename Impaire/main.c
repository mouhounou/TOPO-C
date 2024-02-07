#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mod;
    printf("Entres un nomre\n");
    scanf("%d", &mod);

    if (mod % 2 == 0){
        printf(" === pair ===");
    } else{
        printf(" === impair ===");
    }


    return 0;
}
