#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int special(char caractere, char* senha){
    int i = strchr(senha, caractere);

    if(i == NULL){
        return 0;
    }
    return 1;
}

int validacao(char* senha){
    int tamanho = strlen(senha);
    if (tamanho < 8 || tamanho > 50){
        return 0;
    }

    int caractereEspecial = special('*', senha) + special('$', senha) + special('&', senha) + special('#', senha) + special('@', senha);

    if(caractereEspecial == 0){
        return 0;
    }
    return 1;
}

int main(){
    char senha[50];
    printf("Crie uma senha(requer 8 caracteres e carctere especial,máximo 50 caracteres): ");
    scanf("%s%*c", senha);
    int V = validacao(senha);

    if(V == 1){
        printf("Senha válida.\n");
        return;
    }
    printf("Senha inválida.\n");
    main();
    
}