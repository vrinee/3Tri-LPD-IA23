#include <stdlib.h>
#include <stdio.h>

float convert(int x, int y, int n){
    float val[3] = {1, 4.88, 5.33};
    return (n/val[x])*val[y]
}

int main() {
    int curO, curF;
    float x;

    printf("0-Real\n1-Dolar\n2-Euro\n");
    printf("Selecione a moeda originária:");
    scanf("%d",&curO);
    printf("Selecione a moeda final:");
    scanf("%d",&curF);

    printf("Qual o valor?");
    scanf("%d",&x);

    float valor = convert(curO,curF,x);
}