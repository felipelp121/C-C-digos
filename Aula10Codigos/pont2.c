#include <stdio.h>
#include <locale.h>

int main(){
    int x = 16;
    int *ptrX;

    setlocale(LC_ALL,"");

    ptrX = &x;
    printf("Valor contido no endereço de memória referenciado pelo ponteiro: %d\n", *ptrX);
    (*ptrX)++;
    printf("Valor contido no endereço de memória referenciado pelo ponteiro após incremento: %d\n", *ptrX);
    printf("Valor de x: %d", x);
}
