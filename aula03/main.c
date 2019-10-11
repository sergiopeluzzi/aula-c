#include <stdlib.h>
#include <stdio.h>

int soma();
int subt();
int multi();
float divis(float num1, float num2);
int cabecalho();

int main()
{
    int rsoma, rsubt, rmult, opcao;
    float rdivs;
    
    opcao = cabecalho();

    if (opcao == 1) {
        printf("Escolheu Soma");
    } else if (opcao == 2) {
        printf("Escolheu Subtração");
    } else if (opcao == 3) {
        printf("Escolheu Multiplicação");
    } else if (opcao == 4) {
        printf("Escolheu Divisão");
    } else {
        printf("Escolheu Nada");
    }


    printf("\n\n\n\n\n");
    return 0;
}

int cabecalho() {
    int op;
    printf("------------------------\n");
    printf("----- CALCULADORA ------\n");
    printf("------------------------\n");
    printf("- 1 - Adição \n");
    printf("- 2 - Subtração \n");
    printf("- 3 - Multiplicação \n");
    printf("- 4 - Divisão \n");
    scanf("%d", &op);

    return op;
}

int soma(int num1, int num2) {
    return num1 + num2;
}

int subt(int num1, int num2) {
    if (num1 >= num2) {
        return num1 - num2;
    } else {
        return num2 - num1;
    }
}

int multi(int num1, int num2) {
    return num1 * num2;
}

float divis(float num1, float num2) {
    return num1 / num2;
}







