#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"");
    char teste[] = "Eu super amo tudo isso! Programar é legal. Mas eu odeio C ";
    char *ptr;
    printf("String antiga: %s\n", teste);
    ptr = memchr(teste, 'M', sizeof(teste));
    memmove(ptr, teste, 12);
    printf("String nova: %s\n", teste);
    return 0;
}
