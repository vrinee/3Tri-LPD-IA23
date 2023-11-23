#include <stdlib.h>
#include <stdio.h>


int maximo(int a, int b){
    
    if(a >= b){
        return a;
    }else {
        return b;
    }

}

int main(){
    int x, y;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    int maior = maximo(x, y);
    printf("O maior numero é: %d", maior);
}