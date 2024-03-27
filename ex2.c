
#include <stdio.h>

int main() {

int valor;

printf("digite o valor de termos do vetor: ");
scanf("%i",&valor);

int x[valor];
int y[valor];
int valor_vetor;
int media = 0;
int soma;


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

   soma = (x[j] + y[j]);
    
    media = media + soma;

}

printf(" A Media eh %i \n", media/valor);



for (int i = 1; i <= valor; i++){
    
    if (x[i] < media || x[i] > media)
    {
        printf("O numero %i eh menos que a media na matrix X\n", x[i]);

    } else{

        printf("eh igual a media o vetor X\n");
    }
    

    
}

for (int i = 1; i <= valor; i++){
    
    if (y[i] < media || y[i] > media)
    {
        printf("O numero %i eh menos que a media na matrix Y\n", y[i]);

    } else{

        printf("eh igual a media o vetor Y\n");
    }
    

    
}


    return 0;
}