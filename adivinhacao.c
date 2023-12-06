#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){
//minhas variaveis
int numeroSecreto = 42;
int chute;

    //imprimindo o cabecalho do jogo
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhacao*\n");
    printf("**************************************\n");

    // 
    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
    {
    
       printf("\n Tentativa %d de %d \n", i, NUMERO_DE_TENTATIVAS);
       printf("qual e seu chute?\n ");
       scanf("%d", &chute);

        printf("o numero escolhido para o chute foi: %d\n\n", chute);

            int acertou = (chute == numeroSecreto);

            if (acertou)
            {
                printf("acertou o numero secreto");
                // fazer o for parar de funcionar 
                break; 
            }
            else if (chute > numeroSecreto)
            {
              printf("Seu chute foi maior do que o numero secreto\n\n  Tente novamente!"); 
            }
            else
            {
            
                printf("Seu chute foi menor do que o numero secreto\n\n Tente novamente!");

            }


    }

    printf("\n O jogo acabou!");
    
}
