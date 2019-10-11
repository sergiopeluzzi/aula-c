#include <stdlib.h>
#include <stdio.h>

int _op;

int soma(int a, int b) {
    return a + b;
}

int subt(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

float divis(float a, float b) {
    return a / b;
}

void limpatela() {
    system("clear");
}

void header() {
    limpatela();
    printf("\n-----------------------\n");
    printf("----- CALCULADORA -----\n");
    printf("-----------------------\n");
    printf("- Escolha uma opção:  -\n");
    printf("- 1 - SOMA:           -\n");
    printf("- 2 - SUBTRAÇÃO:      -\n");
    printf("- 3 - MULTIPLICAÇÃO:  -\n");
    printf("- 4 - DIVISÃO:        -\n");
    printf("- 0 - SAIR:           -\n");
    printf("-----------------------\n");
    scanf("%d", &_op);
}

int main() {
    
    int sum, subt, mult, x, y;
    float divs, xf, yf;
    
    do {
        header();
        
        switch(_op) {
            case 1 :
                limpatela();
                printf("-----------------------\n");
                printf("- SOMA ----------------\n");
                printf("- Informe o valor de X: ");
                scanf("%i", &x);
                printf("- Informe o valor de Y: ");
                scanf("%i", &y);    
                sum = soma(x, y);
                printf("- Resultado: %i", sum);
                break;
            default :
                printf("Nada!");
        }
    } while (_op != 0);
    

    return 0;

}