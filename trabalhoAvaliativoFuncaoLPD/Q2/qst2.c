#include <stdlib.h>
#include <stdio.h>

void saque(double *saldo){
    float valor;
    printf("Você selecionou saque.\n");
    printf("\nDigite o valor do saque: ");
    scanf("%f", &valor);
    if(valor <= 0){
        printf("\nValor invalido.\nTente novamente.\n");
        saque(saldo);
        return;
    }
    if(valor > *saldo){
        printf("\nSaldo insuficiente.\n");
        return;
    }
    *saldo -= valor;

}


void deposito(double *saldo){
    float valor;
    printf("Você selecionou depósito.\n");
    printf("\nDigite o valor do depósito: ");
    scanf("%f", &valor);
    if(valor <= 0){
        printf("\nValor inválido.\nTente novamente.\n");
        deposito(saldo);
        return;
    }
    *saldo += valor;

}


int main(){
    int op;
    double saldo = 1000;

    while(1){
        printf("\n1 - Saque\n2 - Deposito\n3 - Saldo\n4 - Sair\n");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &op);

        switch(op){
            case 1:
                saque(&saldo);
                break;

            case 2:
                deposito(&saldo);
                break;

            case 3:
                printf("\nSaldo: R$%lf\n\n", saldo);
                break;
            
            case 4:
                exit(0);
                break;
        }
    }
}