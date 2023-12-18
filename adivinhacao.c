#include <stdio.h>


int main(){
//minhas variaveis
int numeroSecreto = 42;
int chute;
int ganhou = 0;
int tentativas = 0;
double pontos = 1000.00;
pontos = pontos*2;

    //imprimindo o cabecalho do jogo
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhacao*\n");
    printf("**************************************\n");

while(ganhou == 0){ //para deixar o loop infinito usando break para parar é só colocar o 1(TRUE) dentro do while,
            
    
       printf("\n Tentativa %d\n",tentativas+1);
       printf("qual e seu chute?\n ");
       scanf("%d", &chute);

        printf("o numero escolhido para o chute foi: %d\n\n", chute);

            int acertou = (chute == numeroSecreto);

            if (acertou)
            {
                printf("acertou o numero secreto");
                // fazer o for parar de funcionar 
                ganhou = 1; 
            }
            else if (chute > numeroSecreto)
            {
              printf("Seu chute foi maior do que o numero secreto\n\n  Tente novamente!"); 
            }
            else
            {
            
                printf("Seu chute foi menor do que o numero secreto\n\n Tente novamente!");

            }
        tentativas++;
        double pontosperdidos = (chute - numeroSecreto) / 2.0;
        pontos = pontos - pontosperdidos;
        printf("Fim de jogo!\n");
        printf("Voce acertou em %d tentivas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
     }
    

    printf("\n O jogo acabou!");
    
}
