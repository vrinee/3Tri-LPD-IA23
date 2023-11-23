#include <stdio.h>
#include <stdlib.h>

float potencia(float base, int expoente){
    float val = 1;
    for (int i = 0; i < expoente; i++){
        val *= base;
    }
    return val;
}

int main(){
    float x;
    int y;
    printf("Digite a base: ");
    scanf("%f", &x);
    printf("Digite o expoente: ");
    scanf("%d", &y);

    float result = potencia(x, y);
    printf("O resultado é: %f", result);
}