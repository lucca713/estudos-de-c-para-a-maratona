
#include <stdio.h>

int main() {

int valor;

printf("digite o valor de termos do vetor: ");
scanf("%i",&valor);

int x[valor];
int y[valor];
int valor_vetor;
int soma = 0;
int mult;

//aqui vai dar os valores para o vetor x

for(int i = 1; i <= valor; i++){
    printf("digite os valores no vetor x : ");
    
    scanf("%i",&valor_vetor);
    
    x[i] = valor_vetor;
   
}

// aqui vai dar o valor para o vetor y
for(int k = 1; k <=valor; k++){

    printf("\n digite os valores no vetor y : ");
    
    scanf("%i",&valor_vetor);
    
    y[k] = valor_vetor;

    

}

//aqui vai resolver a camera

for ( int j = 1; j <= valor; j++){

    mult = x[j] * y[j];
    
    soma = soma + mult;

}

printf(" o produto escalar eh: %i", soma);

    return 0;
}