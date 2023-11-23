#include <stdio.h>
#include <stdlib.h>

int menorVal(int *vetor){
    int menor = vetor[0];
    int posicao = 0;

    for(int i = 0; i < 7; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
            posicao = i;
        }
    }

    return posicao;

}

int main(){
    int vetor[7];

    for(int i = 0; i < 7; i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int menor = menorVal(vetor);

    printf("O menor valor é: %d. E esta na posicao: %d\n", vetor[menor], menor);
    
}