#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
//minhas variaveis

int segundos = time(0);
srand(segundos);
 int numerogrande = rand();
int numeroSecreto = numerogrande % 100 ;
int chute;
int ganhou = 0;
int tentativas = 0;
double pontos = 1000.00;
 pontos = pontos*2;



    //imprimindo o cabecalho do jogo
      printf("     _   |~  _ \n");
      printf("    [_]--'--[_] \n");
      printf("    |'|""`""|'| \n");
      printf("    | | /^\\ | | \n");
      printf("    |_|_|I|_|_| \n");

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
               break; 
            }

            else if (chute > numeroSecreto){
              printf("Seu chute foi maior do que o numero secreto\n\n  Tente novamente!"); 
            }
            else{
            
                printf("Seu chute foi menor do que o numero secreto\n\n Tente novamente!");  

            }

        tentativas++;

        double pontosperdidos = (chute - numeroSecreto) / 2.0;
        pontos = pontos - pontosperdidos;
        
     }
     
    printf("Fim de jogo!\n");
        
    printf("Voce acertou em %d tentivas!\n", tentativas);
        
    printf("Total de pontos: %.1f\n", pontos);
    

    printf("\n O jogo acabou!");
    
}
