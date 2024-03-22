#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int numero;


printf("Digite qual tabuada tabuada fazer: ");
scanf("%i", &numero);

for(int i = 0; i <= 10; i++ ){

    int conta = i * numero;
    printf("%i X %i = %i \n", i, numero, conta);

}


    return 0;
}
