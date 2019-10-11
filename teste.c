#include <stdio.h>
#include <stdlib.h>

int soma();

int main()
{
    char nome[80];
    char sexo;
    int idade;
/*
    printf("Digite o nome: ");
    gets(nome);

    printf("Digite o sexo: ");
    scanf("%c", &sexo);

    printf("Digite a idade: ");
    scanf("%i", &idade);

    printf("Nome: %s\nIdade: %i\nSexo: %c", nome, idade, sexo);
*/

    idade = soma(5,6);
    printf("Soma: %i", idade);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}