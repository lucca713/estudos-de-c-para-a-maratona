#include <stdio.h>


int main(){
//minhas variaveis
int numeroSecreto = 42;
int chute;
    //imprimindo o cabecalho do jogo
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhacao*\n");
    printf("**************************************\n");
    
    printf("qual é seu chute?\n ");
    scanf("%d", &chute);

    printf("o numero escolhido para o chute foi: %d", chute);
    if (chute == numeroSecreto)
    {
        printf("acertou o numero secreto");
    }
    else{

    printf("tento novamente");

    }
    
    
}
