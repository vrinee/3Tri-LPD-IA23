#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct ficha
{
    char nome[40];
    int idade;
    int matricula;
    float nota;
};

void mostrarDados(struct ficha aluno[10])
{

    int num;
    printf("Digite o numero do aluno ou 0 para todos: ");
    scanf("%d", &num);

    if (num > 10 || num < 0)
    {
        printf("Numero invalido");
        return;
    }

    if (num == 0)
    {
        for (int i = 0; i < 10; i++)
        {
            printf("Nome: %s  ", aluno[i].nome);
            printf("Idade: %d  ", aluno[i].idade);
            printf("Matricula: %d  ", aluno[i].matricula);
            printf("Nota: %f  ", aluno[i].nota);
        }
        return;
    }

    printf("Nome: %s  ", aluno[num].nome);
    printf("Idade: %d  ", aluno[num].idade);
    printf("Matricula: %d  ", aluno[num].matricula);
    printf("Nota: %f  ", aluno[num].nota);
}

void mostrarMedia(struct ficha aluno[10])
{
    float media = 0;
    for (int i = 0; i < 10; i++)
    {
        media += aluno[i].nota;
    }
    media /= 10;
    printf("A media das notas é: %f", media);
}

int main()
{

    struct ficha aluno[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(aluno[i].nome, 40, stdin);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].idade);
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].matricula);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &aluno[i].nota);
    }

    while (1)
    {
        int op;
        printf("1-Mostrar dados\n2-Mostar média das notas\n3-sair\n");
        printf("Digite a opção: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            mostrarDados(aluno);
            break;
        case 2:
            mostrarMedia(aluno);
            break;
        case 3:
            exit(0);
            break;
        }
    }
}