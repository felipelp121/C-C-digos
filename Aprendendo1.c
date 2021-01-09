#include <stdio.h>
int main (void) {
    int a, b = 0;

    char c = 0;
    printf("Calculadora básica de soma ou subtração \n ");
    printf("Digite o Primeiro Numero: ");
    scanf("%i", &a);
    printf("Digite o Segundo Numero: ");
    scanf("%i", &b);
    printf("Digita + para soma e  - para subtracão: ");
    scanf(" %c", &c);

    if (c == '+'){
        printf("A soma é : %i \n", a+b);
    }
    if (c == '-'){
        printf("A subtração é: %i \n", a - b);
    }

    teste:
        a++;
        printf("%i\n", a);
        if (a != 10){
        goto teste;
        }
    return 0;
}
